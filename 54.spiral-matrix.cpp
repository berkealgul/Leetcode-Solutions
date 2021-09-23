/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int r = matrix.size();
        int c = matrix[0].size();

        if(r == 1)
            return matrix[0];
        else if(c == 1)
        {
            vector<int> vec;
            for(int i = 0; i < r; i++)
            {
                vec.push_back(matrix[i][0]);
            }
            return vec;
        }

        vector<int> vec;

        int c_dirs[4] = {1,0,-1,0};
        int r_dirs[4] = {0,1,0,-1};
        int r_i = 0, c_i = -1, dir = 0;
        int dr, dc;

        int total_nums = r*c, placed_nums = 0;

        while(placed_nums < total_nums)
        {
            int n;

            dr = r_dirs[dir];
            dc = c_dirs[dir];
            
            if(dir % 2 == 0)
            {
                n = c;
                r--;    
            }
            else
            {
                n = r;
                c--;
            }

            dir = (dir+1) % 4;

            for(int i = 0; i < n; i++)
            {
                r_i += dr;
                c_i += dc;
                vec.push_back(matrix[r_i][c_i]);
            }

            placed_nums += n;
        }

        return vec;
    }
};
// @lc code=end

