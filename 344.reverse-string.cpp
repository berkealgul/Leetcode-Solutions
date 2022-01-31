class Solution 
{
public:
    void reverseString(vector<char>& s) 
    {
        for(int i = 0, j = s.size()-1, n = s.size()/2; i < n; i++,j--)
        {
            char tem = s[i];
            s[i] = s[j];
            s[j] = tem;
        }
    }
};