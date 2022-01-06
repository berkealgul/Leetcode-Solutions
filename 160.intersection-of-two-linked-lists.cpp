/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
// @lc code=end

