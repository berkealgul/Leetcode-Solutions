/*
 * @lc app=leetcode id=206 lang=c
 *
 * [206] Reverse Linked List
 */

// @lc code=start

struct ListNode* reverseList(struct ListNode* head)
{
    if(!head)
        return head;

    struct ListNode* next = head->next;
    head->next = 0;

    while(next)
    {
        struct ListNode* tem = next->next;
        next->next = head;
        head = next;
        next = tem;
    }

    return head;
}
// @lc code=end

