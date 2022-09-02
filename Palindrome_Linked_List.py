class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        array = []
        while head:
            array.append(head.val)
            head = head.next
        return array == array[::-1]
