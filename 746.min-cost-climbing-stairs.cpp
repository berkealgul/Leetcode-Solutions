class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        
        for(int i = 2, n = cost.size(); i < n; i++)
        {
            cost[i] = min(cost[i] + cost[i-1], cost[i] + cost[i-2]);
        }
        
        return min(cost[cost.size()-1], cost[cost.size()-2]);
    }
};