// stucks in some TC must revisit
class Solution 
{
public:
    vector<int> findAnagrams(string s, string p) 
    {
        sort(p.begin(), p.end());

        vector<int> result;

        for(int i = 0, k = p.size(), n = s.size()-k+1; i < n; i++)
        {
            string sub = s.substr(i,k);
            sort(sub.begin(), sub.end());
            if(sub == p)
                result.push_back(i);
            else 
                i = i+k-1;
        }    

        return result;
    }
};
