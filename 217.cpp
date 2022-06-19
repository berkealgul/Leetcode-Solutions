/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution 
{
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int, int> hash_table;

        for(int n : nums)
        {
            if(hash_table[n]++ > 0)
                return true;
        }

        return false;
    }
};
// @lc code=end

