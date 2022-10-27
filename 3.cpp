class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        int left = 0;
        int right = 0;
        int longest = 0;
        unordered_map<char, int> umap;
        
        while(right < s.size())
        {     
            longest = max(longest, right-left);
            umap[s[right]]++;
            
            while(umap[s[right]] > 1)
            {
                umap[s[left]]--;
                left++;
                
            }
            
            right++;
            
        }
        
        return max(longest, right-left);
    }
};
