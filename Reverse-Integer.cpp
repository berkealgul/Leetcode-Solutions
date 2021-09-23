#include<vector>

class Solution {
public:
    int reverse(int x) 
    {
    	if(x == 0)
    		return 0;

        int scale = 1;

        if(x < 0)
        {
            long val = (long)x *-1;
            if(val > 2147483647 || val < -2147483648)
                return 0;
            
            x *= -1;
            scale = -1;
        }
        
        std::vector<int> digits;

        while(0 < x)
        {   
        	digits.push_back(x % 10);
        	x /= 10;
        }

        long y = 0;

        for(int i = 0, n = digits.size(); i < n; i++)
        {
        	y += digits[i]*pow(10, n-i-1);
            
        
            if(y > 2147483647 || y < -2147483648)
                return 0;
        }

        return y*scale;
    }
};