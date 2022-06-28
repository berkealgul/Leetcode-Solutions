
// Optimal O(n) runtime, O(1) space time solution
class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int sum = n*(n+1)/2;
            
        for(int n : nums)
            sum -= n;
        
        return sum;
    }
};

// O(2*n) runtime, O(n) space solution
// class Solution 
// {
// public:
//     int missingNumber(vector<int>& nums) 
//     {
//         vector<int> table(nums.size()+1, 0);
        
//         for(int n : nums)
//         {
//             table[n] = 1;
//         }
        
//         for(int i = 0; i < table.size(); i++)
//         {
//             if(table[i] == 0)
//                 return i;
//         }
        
//         return 0;
//     }
// };
