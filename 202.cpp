class Solution 
{
public:
    bool isHappy(int n) 
    {
        unordered_map<int, int> umap;

        while(1)
        {
            if(++umap[n] > 1)
                return false;
                
            int m = 0;
            while(n > 0)
            {
                int x = n % 10;
                m += x*x;
                n/=10;
            }    

            if(m == 1)
                return true;

            n = m;
        }
    }
};
