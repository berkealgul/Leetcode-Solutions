class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {   
        unordered_map<int, int> umap;

        int i = 0; 
        while(i < nums.size())
        {
            if(++umap[nums[i]] > 2)
            {
                nums.erase(nums.begin()+i);  
            }
            else
                i++;
        }
         
        return nums.size();
    }
};
