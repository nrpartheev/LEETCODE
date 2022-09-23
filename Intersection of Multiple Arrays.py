class Solution:
    def intersection(self, nums: List[List[int]]) -> List[int]:
        a= [] 
        dict={}
        for i in nums:
            for j in i:
                if j in dict:
                    dict[j]+=1
                else:
                    dict[j] =1
        for i in dict:
            if dict[i] == len(nums):
                a.append(i)
        return sorted(a)