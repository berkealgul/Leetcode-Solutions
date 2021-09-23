class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1)
            return n;
        
        int F[31] = {0};
        
        F[1] = 1;

        for(int i = 2; i <= n; i++)
        {
            F[i] = F[i-1] + F[i-2];
        }

        return F[n];
    }
};

