class Solution 
{
public:
    void rotate(vector<int>& nums, int k) 
    {
        vector<int> result(nums.size(), 0);

        for(int i = 0, n = nums.size(); i < n; i++)
        {
            int j = (i+k)%n;
            result[j] = nums[i];
        }

        nums = result;
    }
};
