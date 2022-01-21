class Solution 
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        for(int start = 0, n = cost.size(); start < n; start++)
        {
            int pos = start;
            int fuel = gas[pos];
            
            if(fuel == 0)
                continue;

            while(1)
            {
                fuel -= cost[pos];

                if(fuel < 0)
                    break;
                else
                {
                    pos = (pos+1)%n;
                    fuel += gas[pos];
                }
                    
                if(pos == start)
                    return start;
            }
        }

        return -1;
    }
};
