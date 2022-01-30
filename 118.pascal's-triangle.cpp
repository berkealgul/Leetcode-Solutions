class Solution 
{
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> pascal;
        
        pascal.push_back(vector<int>(1,1));
        int colsize = 2;
        
        for(int i = 1; i < numRows; i++)
        {
            vector<int> row;
            row.push_back(1);
            for(int j = 1; j < colsize-1; j++)
            {
                row.push_back(pascal[i-1][j]+pascal[i-1][j-1]);
            
            }
            row.push_back(1);
            pascal.push_back(row);
            colsize++;
        }
        
        return pascal;
    }
};