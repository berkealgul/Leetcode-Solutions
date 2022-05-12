class Solution 
{
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<map<char, int>> v(9);
        vector<map<char, int>> h(9);
        vector<map<char, int>> b(9);

        for(int i = 0; i < 9; i++)
             for(int j = 0; j < 9; j++)
             {
                 char c = board[i][j];
                                  
                 if(c == '.') continue;
    
                 if(++h[j][c] > 1 || ++v[i][c] > 1 || ++b[(j/3)+(i/3)*3][c] > 1)
                     return false;
             }
        
        return true;
    }
};