class Solution 
{
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        vector<int> changes(amount+1, 100000);
        changes[0] = 0;

        for(int i = 1; i <= amount; i++)
        {
            int lowest_change = changes[i];
            
            for(int c : coins)
            {
                int x = i-c;
                if(x >= 0)
                    lowest_change = min(lowest_change, changes[x]);
            }  
            changes[i] = lowest_change + 1;
        }
        
        return changes[amount] >= 100000 ? -1 : changes[amount];
    }
};