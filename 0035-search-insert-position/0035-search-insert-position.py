class Solution:
    def searchInsert(self, nums: list[int], target: int) -> int:
        for i in range(len(nums)):
            if(target<=nums[i]):
                return i
        return len(nums)
        