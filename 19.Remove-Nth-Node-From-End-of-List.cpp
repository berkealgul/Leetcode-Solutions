class Solution 
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {      
        ListNode* iter = head;
        ListNode* target_prev = head;
        
        while(iter)
        {
            if(n >= 0)
                n--;
            else
                target_prev = target_prev->next;
            
            iter = iter->next;    
        }
        
        if(n >= 0)
            return head->next;
        else
        {
            target_prev->next = target_prev->next->next;
            return head;
        }
    }
};