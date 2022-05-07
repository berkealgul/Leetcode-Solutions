class Solution 
{
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if (!head || !head->next)
            return head;
        
        ListNode* curr = head;
        ListNode* prev = head;
        
        while(curr)
        {
            if(curr->next && curr->val != curr->next->val)
            {
                prev->next = curr->next;
                prev = curr->next;  
            }
                     
            curr = curr->next;
        }
        
        prev->next = 0;
        
        return head;
    }
};