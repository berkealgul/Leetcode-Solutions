class Solution 
{
public:
    int minDeletionSize(vector<string>& strs) 
    {
        int m = strs.size();
        int n = strs[0].size();
        int deleted = 0;

        vector<char> row(n);

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(row[j] == '#') 
                    continue;

                if(row[j] <= strs[i][j])
                    row[j] = strs[i][j];
                else
                { 
                    row[j] = '#';
                    deleted++;
                }
            }
        }

        return deleted;
    }
};