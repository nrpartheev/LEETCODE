def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
    if head == None:
        return head
    result = head
    while head.next:
        if head.val == head.next.val:
            head.next = head.next.next
        else:
            head = head.next
    return result
