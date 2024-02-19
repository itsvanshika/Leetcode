class Solution(object):
    def findPeakElement(self, nums):
        n = len(nums)
        l=0
        r=n-1
        while l<r:
            m = (l+r)//2
            if nums[m]>=nums[m+1]:
                r=m
            else:
                l=m+1
        return l
        """
        :type nums: List[int]
        :rtype: int
        """
        