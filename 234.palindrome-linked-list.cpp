class Solution 
{
public:
    bool isPalindrome(ListNode* head)
    {
        vector<int> vals;
        bool backtracking = false;
        bool palidrome = true;
        
        while(head)
        {

            if(backtracking)
            {
                
            }
            else
            {
                if(!vals.empty())
                {
                        
                }
                
                vals.push_back(val);
            }
            

            head = head->next;
        }
        
        return palidrome && backtracking;
    }
};