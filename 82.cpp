class Solution 
{
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(!head || !(head->next))
            return head;
           
        ListNode* curr = head;
        ListNode* prev = 0;

        while(curr)
        {
            if(curr->next && curr->next->val == curr->val)
            {
                while(curr->next && curr->next->val == curr->val)
                    curr = curr->next;
                
                if(!prev)
                    head = curr->next;
                else
                    prev->next = curr->next;     
            }
            else
            {
                prev = curr;
            }
                
            curr = curr->next;
        }
        
        return head;
    }
};