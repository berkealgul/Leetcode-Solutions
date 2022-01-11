class Solution 
{
public:
    bool isPalindrome(ListNode* head)
    {
        vector<int> vals;
        int i = 0;<

        while(head)
        {
            vals.push_back(head->val);
        }

        int a = 0;
        int b = vals.size();

        while(a != b)
        {
            if(vals[a] != vals[b])
                return false;
                
            a++
            b--;
        }
        
        return true;

    }
};