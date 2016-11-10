class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        for val in nums:
            if(val==0):
                nums.remove(val)
                nums.append(0)
