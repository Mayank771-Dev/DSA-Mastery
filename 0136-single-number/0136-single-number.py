class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        st=set(nums)
        for i in st:
            if nums.count(i)==1: return i