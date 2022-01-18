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
class Solution {
public:
    
    ListNode* reverseList(ListNode *head) {
        
        if(!head or !head->next) {
            return head;
        }
        
        ListNode *curr = head, *prev = NULL, *nxt = NULL;
        
        while(curr) {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    
    bool isPalindrome(ListNode* head) {
        if(!head or !head->next) {
            return true;
        }
        
        ListNode *fast = head, *slow = head, *prevElement = NULL;
        
        while(fast and fast->next) {
            prevElement = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        prevElement->next = NULL;
        
        ListNode *halfHead = reverseList(slow);
        
        ListNode *p = head, *q = halfHead;
        
        while(p and q) {
            if(p->val != q->val) {
                return false;
            }
            p = p->next;
            q = q->next;
        }
        return true;
    }
};
