class Solution 
{
public:
    int minimumCardPickup(vector<int>& cards) 
    {
        unordered_map<int, int> visits;
        unordered_map<int, int> last_pos;
        
        int n = cards.size();    
        int min_cards = n+1;
        
        for(int i = 0; i < n; i++)
        { 
            int c = cards[i];
            
            if(++visits[c] >= 2)
            {
                min_cards = min(i -last_pos[c] +1, min_cards);  
            }
            
            last_pos[c] = i;
        }
        
        
        return (min_cards == n+1) ? -1 : min_cards;
    }
};