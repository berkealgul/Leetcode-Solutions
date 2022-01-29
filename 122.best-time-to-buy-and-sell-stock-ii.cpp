class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit = 0;
        int buy = INT_MAX;

        for(int p : prices)
        {
            if(p > buy)
            {
                profit += p-buy;
            }

            buy = p;
        }

        return profit;
    }
};

