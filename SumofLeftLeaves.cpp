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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        return (root->left&&!root->left->right&&!root->left->left?root->left->val:0)+sumOfLeftLeaves(root->right)+sumOfLeftLeaves(root->left);
    }
};
