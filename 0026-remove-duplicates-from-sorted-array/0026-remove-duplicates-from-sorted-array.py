class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        i=1
        while i<len(nums):
            if nums[i]==nums[i-1]:
                del nums[i]
                i-=1
            i+=1
        return len(nums)