class Solution 
{
public:
    ListNode* middleNode(ListNode* head) 
    {
        if(!head->next)
            return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while(1)
        {
            slow = slow->next;

            if(fast->next && fast->next->next)
                fast = fast->next->next;
            else
                return slow;
        }

    }
};