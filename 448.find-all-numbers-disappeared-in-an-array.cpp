class Solution 
{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        vector<int> dis;
        
        for(int i = 1, n = nums.size(); i <= n; i++)
        {
            if(!binary_search(nums.begin(), nums.end(), i))
                dis.push_back(i);   
        }
        
        return dis;
    }    
};