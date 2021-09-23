/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        return search(matrix, 0, r*c, target);
    }

    bool search(vector<vector<int>>& matrix, int m, int n, int target)
    {
        int i = (m+n)/2;
        int x = i % matrix[0].size();
        int y = i / matrix[0].size();
        int val = matrix[y][x];

        if(val == target)
            return true;

        if(i == m || i == n)
            return false;

        if(val > target)
        {
            return search(matrix, m, i, target);
        }
        else
        {
            return search(matrix, i, n, target);
        }
    }

};
// @lc code=end

