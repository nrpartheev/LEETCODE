def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
    result = pointer = ListNode()
    while list1 and list2:
        if list1.val<list2.val:
            pointer.next = list1
            list1 = list1.next
        else:
            pointer.next = list2
            list2 = list2.next
        pointer = pointer.next
    while list1:
        pointer.next = list1
        list1 = list1.next
        pointer = pointer.next
    while list2:
        pointer.next = list2
        list2 = list2.next
        pointer= pointer.next
    return result.next
