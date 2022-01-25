class Solution 
{
public:
    bool validMountainArray(vector<int>& arr) 
    {
        int n = arr.size();

        if(n == 1)
            return false;

        int peak = -1;
        int prev = arr[0];

        for(int i = 1; i < n; i++)
        {
            int num = arr[i];
            if(prev == num)
                return false;
            else if(prev > num)
            {
                if(peak < 0)
                    peak = i-1;
            }
            else
            {
                if(peak > 0)
                    return false;
            }

            prev = num;
        }

        return peak > 0;
    }
};
