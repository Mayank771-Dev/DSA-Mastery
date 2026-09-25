class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        s=set(nums1)
        y=set(nums2)
        result=[]
        for a in s:
            if a in y:
                result.append(a)
        return result
        