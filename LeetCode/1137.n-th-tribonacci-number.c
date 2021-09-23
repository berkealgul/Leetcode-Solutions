/*
 * @lc app=leetcode id=1137 lang=c
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start

int tribonacci(int n)
{
    if(n == 0)
        return 0;
    else if (n < 3)
        return 1;
    
    int f0 = 0, f1 = 1, f2 = 1, fn;

    for(int i = 3; i <= n; i++)
    {
        fn = f0 + f1 + f2;
        f0 = f1;
        f1 = f2;
        f2 = fn; 
    }

    return fn;
}
// @lc code=end

