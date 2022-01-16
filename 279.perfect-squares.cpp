/*
 * @lc app=leetcode id=279 lang=cpp
 *
 * [279] Perfect Squares
 */

// @lc code=start
class Solution {
public:
    int numSquares(int n) 
    {
        int x = 0;
        int i = 1;

        while(n > 0)
        {

            if(n >= i*i)
            {
                i++;
            }
            else
            {
                cout << i << endl;
                int ip = i-1;
                n -= ip*ip;
                i = 1;
                x++;
                
            }

            
        }

        return x;
    }
};
// @lc code=end

