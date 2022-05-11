// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem338.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> bits(n+1, 0);

        for(int i = 0; i <= n; i++)
        {
            int num = i;
            int ones = 0;

            while(num >= 1)
            {
                if(num % 2)
                    ones++;

                num/=2;
            }

            bits[i] = ones;
        }

        return bits;
    }
};
// @lc code=end

