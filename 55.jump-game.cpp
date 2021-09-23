/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        vector<bool> visited(nums.size(), false);
        return canJump(nums,visited,0);    
    }

    bool canJump(vector<int> &nums, vector<bool> &visited, int pos)
    {
        if(pos == nums.size()-1)
            return true;
        else if(pos >= nums.size())
            return false;
        else if(visited[pos])
            return false;
        
        visited[pos] = true;
        
        for(int i = nums[pos], n = 1; i >= n; i--)
        {
            if(canJump(nums, visited, pos+i))
                return true;
        }

        return false;
    }
};
// @lc code=end

