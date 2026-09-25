class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        s={}
        for i in range(len(nums)):
            if target-nums[i] in s:
                return [i,s[target-nums[i]]]
            s[nums[i]]=i
        