class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int l = nums.size()-1;
        int f = 0;
        
        while(l >= f)
        {
            int i = f+(l-f)/2;
            
            cout << i << " "<< f <<"-"<<l << endl;
            
            int num = nums[i];
    
            if(num == target)
                return i;
            else if(num < target)
                f = i+1;
            else
                l = i-1;
        }
        
        return l+1;
    }
};

