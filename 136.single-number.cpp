class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int> map;
        for(int n : nums)
        {
            if(++map[n] == 2)   
                map.erase(n);
        }
        
        return map.begin()->first;
    }
};