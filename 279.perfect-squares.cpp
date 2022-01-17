class Solution {
public:
    int numSquares(int n) 
    {
        vector<int> nums(n+1,n+1);
        nums[1] = 0;
        nums[0] = 0;
        
        for(int i = 1; i < n+1; i++)
        {
            int k = 1;
            
            while(k*k <= i)
            {
                nums[i] = min(nums[i-k*k], nums[i]);
                k++;
            }
            nums[i]++;
        }
        
        return nums[nums.size()-1];
    }
};
