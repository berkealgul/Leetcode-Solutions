/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size();

        if(n == 1)
            return nums[0];
        else if(n == 2)
            return max(nums[0], nums[1]);

        vector<int> d1(n,0);
        vector<int> d2(n,0);

        d1[0] = nums[0];
        d1[1] = max(nums[0], nums[1]);

        d2[0] = nums[1];
        d2[1] = max(nums[1], nums[2]);
        
        for(int i = 2; i < n-1; i++)
        {
            d1[i] = max(d1[i-2]+nums[i], d1[i-1]);
            d2[i] = max(d2[i-2]+nums[i+1], d2[i-1]);
        }

        return max(d1[n-2], d2[n-2]);
    }
};
// @lc code=end

