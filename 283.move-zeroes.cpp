class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        vector<int> sorted;
        int zeros = 0;

        for(int n : nums)
        {
            if(n != 0)
                sorted.push_back(n);
            else
                zeros++;
        }

        for(int i = 0; i < zeros; i++)
            sorted.push_back(0);

        nums = sorted;
    }
};
