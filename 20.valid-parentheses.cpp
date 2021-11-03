class Solution {
public:
    bool isValid(string s) 
    {
        if(s.size() % 2 == 1)
            return false;
        
        vector<char> openSet;
        
        for(char c : s)
        {
            // check if they are open paranthesies
            if(c == 40 || c == 91 || c == 123)
            {
                openSet.push_back(c);
            }
            else if(openSet.size() > 0 && arePair(c, openSet.back()))
            {
                openSet.pop_back();
            }
            else
                return false;
        }
        
        if(openSet.size() > 0)
            return false;
        else
            return true;
    }
    
    //check if they are pair with acsii vals
    bool arePair(char close, char open)
    {
        int dif = close-open;
        if(dif <= 2 && dif > 0)
            return true;
        else
            return false;
    }
};