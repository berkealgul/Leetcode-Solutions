
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <iostream>

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(!head || k == 1)
            return head;
        
        int len = 0;
            
        ListNode *curr = head;
        
        while(curr)
        {
            curr = curr->next;
            len++;
        }
        
        curr = head;        
        
        ListNode *prev_start, *prev;
        
        while(len >= k && curr)
        {
            
            ListNode *group_start = curr;
            
            int i = 0;
            
            while(i < k && curr)
            {
                ListNode *temp = curr->next;
                
                if(prev)
                    curr->next = prev;
                
                prev = curr;
                curr = temp;
                
                i++;
            }
            
            
            if(prev_start)
                prev_start->next = prev;
            else
                head = prev;
            
            
            prev_start = group_start;
            
            
            len -= k;
        }
        
        
        prev_start->next = curr;
        
        
        return head;

    }
};


