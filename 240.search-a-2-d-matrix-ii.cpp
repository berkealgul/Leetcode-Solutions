class Solution 
{
public:
    //2d binary search with recursion || passes 124/129 TC || fails due to time limit
    
    // int t;
    // vector<vector<bool>> checked;

    // bool searchMatrix(vector<vector<int>>& matrix, int target) 
    // {
    //     t = target;
    //     int r = matrix.size();
    //     int c = matrix[0].size();
    //     checked = vector<vector<bool>>(r, vector<bool>(c, false));
    //     return search(c-1, 0, r-1, 0, matrix);    
    // }

    // bool search(int r, int l, int d, int u, vector<vector<int>>& m)
    // {
    //     int mid_h = l + (r - l) / 2;
    //     int mid_v = u + (d - u) / 2;

    //     if(r >= l && d >= u && !checked[mid_v][mid_h])
    //     {
    //         checked[mid_v][mid_h] = true;

    //         int n = m[mid_v][mid_h];
            
    //         if(n == t)
    //             return true;
    //         else if(n < t)
    //             return search(r, mid_h+1, d, u, m) || search(r, l, d, mid_v+1, m);
    //         else
    //             return search(mid_h-1, 0, d, u, m) || search(r, l, mid_v-1, 0, m);
    //     }

    //     return false;
    // }
    

    // O(m+n approach)
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m = matrix.size();
        int r = 0;
        int c = matrix[0].size()-1;

        while(r < m && c >= 0)
        {
            if(matrix[r][c] == target)
                return true;
            else if(matrix[r][c] > target)
                c--;
            else
                r++;
        }

        return false;
    }
};