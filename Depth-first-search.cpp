//from leetcode question No.104
//https://leetcode.com/problems/maximum-depth-of-binary-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        return root == NULL ? 0: max(maxDepth(root->left),maxDepth(root->right)) + 1;
    /**another answer 
    *    int max = 0;
    *    if(root != NULL){
    *         max++;
    *         int maxLeft = maxDepth(root->left);
    *         int maxRight = maxDepth(root->right);
    *         max += maxLeft > maxRight ? maxLeft : maxRight;
    *     }
    *   return max;
    *}
    */
};
