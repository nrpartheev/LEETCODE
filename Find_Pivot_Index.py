class Solution:
    def pivotIndex(self, nums: List[int]) -> int:  
        sum_left = 0
        sum_total = sum(nums)
        for i in range(len(nums)):
            if sum_left == sum_total-nums[i]:
                return i
            else:
                sum_left += nums[i]
                sum_total -= nums[i]
        return -1
