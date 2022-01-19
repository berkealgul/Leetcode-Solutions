class Solution 
{
public:
    ListNode *detectCycle(ListNode *head) 
    {         
        ListNode *fast = head;
        ListNode *slow = head;
        
        do
        {
            if(!fast || !fast->next)
                return NULL;
            
            fast = fast->next->next;
            slow = slow->next;
        } while(fast != slow);
        
        
        slow = head;
        
        while(fast != slow)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        return fast;
    }
};