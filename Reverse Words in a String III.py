class Solution:
    def reverseWords(self, s: str) -> str:
        ans = ''
        s = s.split(' ')
        for i in range(len(s)-1):
            ans += s[i][::-1]
            ans+= ' '
        return ans+s[-1][::-1]