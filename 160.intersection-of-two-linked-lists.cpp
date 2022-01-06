//unefficent algorithm :( but it is honest work
// anyway we can have other algorithm
// by switich lane when they reach to end as a result travel distance will be equal

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        vector<ListNode*> visitedA, visitedB;
        ListNode* intersection = NULL;

        while(headA || headB)
        {
            if(headA)
            {
                visitedA.push_back(headA);
                auto it = find(visitedB.begin(), visitedB.end(), headA);
                if(it != visitedB.end())
                {
                    intersection = headA;
                    break;
                }  
                headA = headA->next;
            }

            if(headB)
            {
                visitedB.push_back(headB);
                auto it = find(visitedA.begin(), visitedA.end(), headB);
                if(it != visitedA.end())
                {
                    intersection = headB;
                    break;
                }  
                headB = headB->next;
            }      
        }

        return intersection;
    }
};

