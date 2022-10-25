class Solution 
{
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        int p1 = 0, y1 = 0;
        int p2 = 0, y2 = 0;
        
        while(y1 < word1.size() && y2 < word2.size())
        {
            if(word1[y1][p1] != word2[y2][p2]) { return false; }
            
            if(p1 == word1[y1].size()-1)
            {
                p1 = 0;
                y1++;
            }
            else
            {
                p1++;
            }
            
            if(p2 == word2[y2].size()-1)
            {
                p2 = 0;
                y2++;
            }
            else
            {
                p2++;
            }
            
        }
        
        return !(y1 < word1.size() || y2 < word2.size());
    }
};