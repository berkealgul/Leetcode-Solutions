class Solution 
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> umap;

        // sort key string in alphabetical order and push key-value pair in hash table
        for(string s : strs)
        {
            string key = s;
            sort(key.begin(),key.end());
            umap[key].push_back(s);
        }

        vector<vector<string>> result;

        // push all hash table elements into output vector
        for (auto itr = umap.begin(); itr != umap.end(); itr++)
        {
            result.push_back(itr->second);
        }

        return result;
    }
};
