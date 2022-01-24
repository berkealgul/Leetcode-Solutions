// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem45.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
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
// @lc code=end

