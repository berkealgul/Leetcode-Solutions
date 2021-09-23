/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size() <= 1)
            return nums.size();

        int k = 0;

        for(int i = 1, n = nums.size(); i < n; i++)
        {
            if(nums[k] != nums[i])
            {
                int idx = k+1;

                int temp = nums[idx];
                nums[idx] = nums[i]; 

                k++;
            }
        }

        return k+1;
    }
};
// @lc code=end

