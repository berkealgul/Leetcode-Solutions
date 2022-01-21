// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem134.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=134 lang=cpp
 *
 * [134] Gas Station
 */

// @lc code=start
class Solution 
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        for(int start = 0, n = cost.size(); start < n; start++)
        {
            int pos = start;
            int fuel = gas[pos];
            
            if(fuel == 0)
                continue;

            while(1)
            {
                fuel -= cost[pos];

                if(fuel < 0)
                    break;
                else
                {
                    pos = (pos+1)%n;
                    fuel += gas[pos];
                }
                    
                if(pos == start)
                    return start;
            }
        }

        return -1;
    }
};
// @lc code=end

