# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        head = ListNode(val=0)
        curr = head
        s = 0
        
        while l1 is not None or l2 is not None:                
            v1 = 0 if l1 is None else l1.val
            v2 = 0 if l2 is None else l2.val
            
            val = v1 + v2 + s
            s = int(val / 10)
            
            curr.next = ListNode(val=val%10)
            curr = curr.next
            
            l1 = None if l1 is None else l1.next
            l2 = None if l2 is None else l2.next
    
        if s == 1:
            curr.next = ListNode(val=1)
            
        return head.next