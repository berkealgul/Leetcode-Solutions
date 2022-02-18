
// solution with std::priority_queue SO SLOW
#include <queue>
using namespace std;

class Solution 
{
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {

        // using lambda to compare elements.
        auto compare = [] (vector<int> p1, vector<int> p2)
        {
            return p1[0]*p1[0]+p1[1]*p1[1] > p2[0]*p2[0]+p2[1]*p2[1];
        };

        std::priority_queue<vector<int>, vector<vector<int>>, decltype(compare)> q(compare);

        for(vector<int> p : points)
        {
            q.push(p);
        }
        
        vector<vector<int>> result;
        
        while(k > 0)
        {
            result.push_back(q.top());
            q.pop();
            k--;
        }
        
        return result;
    }
};