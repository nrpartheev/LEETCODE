# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        pointers = []
        if head == None:
            return 0
        while head.next != None and head.next not in pointers:
            pointers.append(head)
            head = head.next
        return head.next != None
    
