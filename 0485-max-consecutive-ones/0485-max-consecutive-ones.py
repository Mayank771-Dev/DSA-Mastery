class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        maxval=0
        count=0
        for i in range(len(nums)):
            if nums[i]==1:
                count+=1
            else:
                maxval=max(count,maxval)
                count=0
        maxval = max(count, maxval)
        return maxval