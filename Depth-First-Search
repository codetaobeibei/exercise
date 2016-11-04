# from leetcode
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root==None:
            return 0
        maxLeft = Solution.maxDepth(self,root.left)
        maxRight = Solution.maxDepth(self,root.right)
        return max(maxLeft,maxRight) + 1
