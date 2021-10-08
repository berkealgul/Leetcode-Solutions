class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        
        if(n == 1)
            return nums[0];
        if(n == 2)
            return max(nums[0], nums[1]);

        if(nums[0] > nums[1])
        {
            nums[1] = nums[0];
        }

        int max_money = max(nums[0], nums[1]);

        for(int i = 2; i < n; i++)
        {
            int money = nums[i] + nums[i-2];

            if(max_money < money) 
            {
                max_money = money;
            }

            nums[i] = max_money;
        }

        return max_money;
    }
};


