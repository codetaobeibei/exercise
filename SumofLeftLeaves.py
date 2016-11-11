# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def sumOfLeftLeaves(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if(not root): return 0
        if(root.left and not root.left.left and not root.left.right):
            return root.left.val+Solution.sumOfLeftLeaves(self,root.left)+Solution.sumOfLeftLeaves(self,root.right)
        else:
            return Solution.sumOfLeftLeaves(self,root.left)+Solution.sumOfLeftLeaves(self,root.right)
