class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        ans = []
        dict = {"2":"abc","3":"def","4":"ghi","5":"jkl","6":"mno","7":"pqrs","8":"tuv","9":"wxyz"}
        for i in digits:
            if ans==[]:
                for j in dict[i]:
                    ans.append(j)
            else:
                temp = []
                for j in ans:
                    for k in dict[i]:
                        temp.append(j+k)
                ans = temp
                    
        return ans