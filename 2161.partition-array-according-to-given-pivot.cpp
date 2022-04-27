class Solution 
{
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        vector<int> mid, left, right;

        
        for(int n : nums)
        {
            if(n < pivot)
                left.push_back(n);
            else if(n > pivot)
                right.push_back(n);
            else
                mid.push_back(n);
        }
        
        
        vector<int> result;
        result.reserve(left.size()+right.size()+mid.size());
        result.insert(result.end(), left.begin(), left.end());
        result.insert(result.end(), mid.begin(), mid.end());
        result.insert(result.end(), right.begin(), right.end());
        
        return result;
    }
};