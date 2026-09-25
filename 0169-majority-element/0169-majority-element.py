class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        freq = {}
        for x in nums:
            if x in freq:
                freq[x] += 1
            else:
                freq[x] = 1
        for x in freq:
            if freq[x] > len(nums) / 2:
                return x