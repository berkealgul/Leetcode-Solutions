class Solution 
{
public:
    int findDuplicate(vector<int>& nums) 
    {
        unordered_map<int, int> umap;

        for(int n : nums)
        {
            if(++umap[n] > 1)
                return n;
        }

        return 0;
    }
};