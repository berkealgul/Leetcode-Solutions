class Solution 
{
public:
    int climbStairs(int n) 
    {
        if(n <= 2)
            return n;
        
        int f0 = 1;
        int f1 = 2;
        int fn;

        for(int i = 2; i < n; i++)
        {   
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        
        return fn;
    }
};