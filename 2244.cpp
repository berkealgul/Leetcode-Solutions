class Solution 
{
public:
    int minimumRounds(vector<int>& tasks) 
    {
        unordered_map<int, int> umap;
        int rounds = 0;

        for(int t : tasks)
        {
            umap[t]++;
        }

        for(auto i : umap)
        {
            if(i.second == 1)
                return -1;
            if(i.second == 2 || i.second == 3)
                rounds++;
            else
                rounds += (i.second+2)/3;
        }

        return rounds;
    }
};
