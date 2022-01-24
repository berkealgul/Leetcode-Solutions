class Solution 
{
public:
    int jump(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int>jumps(n, INT_MAX);

        jumps[0] = 0;

        for(int i = 0, m = n-1; i < m; i++)
        {
            for(int j = nums[i]; j > 0; j--)
            {
                int pos = i+j;

                if(pos < n)
                {
                    jumps[pos] = min(jumps[pos], jumps[i]+1);
                }
            }

        }

        return jumps[n-1];
    }

};

