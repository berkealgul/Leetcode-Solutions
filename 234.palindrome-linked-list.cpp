class Solution 
{
public:
    bool isPalindrome(ListNode* head)
    {
        vector<ListNode*> vals;
        int i = 0;<

        while(head)
        {
            vals.push_back(head);
        }

        int a = 0;
        int b = vals.size();

        while(a != b)
        {
            if(vals[a]->val != vals[b]->val)
                return false;
                
            a++;
            b--;
        }
        
        return true;

    }
};