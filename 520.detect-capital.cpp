class Solution 
{
public:
    bool checkAllLower(string word)
    {
        for(int i = 1, n = word.size(); i < n; i++)
        {
            if(isupper((char)word[i]))
                return false;
        }

        return true;
    }

    bool checkAllUpper(string word)
    {
        for(int i = 1, n = word.size(); i < n; i++)
        {
            if(!isupper((char)word[i]))
                return false;
        }

        return true;
    }

    bool detectCapitalUse(string word) 
    {
        if(word.size() == 1)
            return true;

        if(isupper((char)word[0]))
        {
            if(isupper((char)word[1]))
                return checkAllUpper(word);
            else
                return checkAllLower(word);
        }

        else
            return checkAllLower(word);
    }
};
