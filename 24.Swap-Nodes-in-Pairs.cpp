class Solution 
{
public:
    ListNode* swapPairs(ListNode* head) 
    {
        if(!head)
            return head;
        
        ListNode* curr = head;
        ListNode* next = head->next;
        ListNode* prev = new ListNode;
        prev->next = head;
        head = prev;
        
        while(next)
        {
            ListNode* next_ = next->next;
        
            
            next->next = curr;
            prev->next = next;
            curr->next = next_;
            
            prev = curr;
            curr = next_;
            
            if(next_)
                next = next_->next;
            else next = 0;
            
        }
        
        return head->next;
    }
};