class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> table;
        int tresh = nums.size()/2;
        for(int n : nums)
        {
            if(++table[n] > tresh)
                return n;
        }

        return 0;
    }
};

