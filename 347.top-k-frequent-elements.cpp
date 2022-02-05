class Solution 
{
public:
    unordered_map<int, int> umap;

    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> result;

        for(int n : nums)
        {
            if(umap[n]++ == 0)
                result.push_back(n);
        }

        sort(result.begin(), result.end(),[this](int i, int j)
        {
            return umap[i] > umap[j];
        });

        return vector<int>(result.begin(), result.begin()+k);
    }
};

