class Solution 
{
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char, int> chars;
        int j = 0;

        for(int i = 0; i < s.size(); i++)
        {
            chars[s[i]]++;

            while(chars[s[j]] > 1)
            {
                j++;

                if(j == s.size())
                    return -1;
            }

        }    

        return j;
    }
};

