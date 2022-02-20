// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem200.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution 
{
public:
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, int i, int j)
    {
        if(i == grid.size() || j == grid[0].size() || i == -1 || j == -1)
            return;
        else if(!visited[i][j] && grid[i][j] == '1')
        {
            visited[i][j] = true;
            dfs(grid,visited,i+1,j);
            dfs(grid,visited,i,j+1);
            dfs(grid,visited,i-1,j);
            dfs(grid,visited,i,j-1);
        }
    }

    int numIslands(vector<vector<char>>& grid) 
    {
        int islands = 0;
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size()));

        for(int i = 0, n = grid.size(); i < n; i++)
            for(int j = 0, m = grid[0].size(); j < m; j++)
            {
                if(!visited[i][j] && grid[i][j] == '1')
                {
                    islands++;
                    dfs(grid,visited,i,j);
                }
            }

        return islands;
    }
};
// @lc code=end

