class Solution 
{
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        vector<vector<bool>> rotated(n, vector<bool>(n, false));

        for(int y = 0; y < n; y++)
            for(int x = 0; x < n; x++)
            {
                if(!rotated[y][x])
                {
                    int _x = n-y-1;
                    int _y = x;
                    int tem = matrix[_y][_x];
                    matrix[_y][_x] = matrix[y][x]; 
                    matrix[y][x] = tem;
                    rotated[_y][_x] = true;
                }
            }
    }
};

