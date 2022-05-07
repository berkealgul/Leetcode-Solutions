class Solution
{
public:
    string removeDigit(string number, char digit) 
    {
        string best = "0";
        
        for(int i = 0; i < number.size(); i++)
        {

            if(number[i] == digit)
            {
                string n = number;
                n.erase(i,1);
                
                if(best < n)
                {
                    best = n;
                }
                    
            }
        }
        
        return best;
    }
};