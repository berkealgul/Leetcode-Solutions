class Solution 
{
public:

    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {   
        if(lists.empty())
            return nullptr;

        // using lambda to compare elements.
        auto compare = [](ListNode* lhs, ListNode* rhs)
                    {
                        return lhs->val > rhs->val;
                    };

        std::priority_queue<ListNode*, std::vector<ListNode*>, decltype(compare)> q(compare);

        int i = 0;
        int n = lists.size();

        ListNode* head = lists[0];

        while(1)
        {
            if(!head)
            {
                if(++i == n)
                    break;

                head = lists[i];
            }
            else
            {
                q.push(head);
                head = head->next; 
            }
        }

        if(q.empty())
            return nullptr;

        head = q.top();
        ListNode* node = head;
        q.pop();
        
        while (!q.empty())
        {
            ListNode* next = q.top();
            node->next = next;
            next->next = 0;
            node = next;
            q.pop();
        }

        return head;
    }
};
