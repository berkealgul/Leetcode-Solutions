class Solution 
{
public:

    vector<vector<char>> board;
    string word;

    bool exist(vector<vector<char>>& board_, string word_) 
    {
        board = board_;
        word = word_;

        for(int i = 0; i < board.size(); i++)
            for(int j = 0; j < board[0].size(); j++)
            {
                if(exist(i, j, 0))
                    return true;
            }

        return false;
    }

    bool exist(int i, int j, int w)
    {
        if(i == board.size() || i < 0 || j < 0 || j == board[0].size() || board[i][j] == '*')
            return false;

        if(board[i][j] == word[w])
        {
            char tem = board[i][j];
            board[i][j] = '*';

            if(++w == word.size())
                return true;
            else
            {
                bool result = exist(i+1, j, w) || exist(i-1, j, w) 
                || exist(i, j-1, w) || exist(i, j+1, w);
                board[i][j] = tem;
                return result;
            }
        }

        return false;
    }
};
