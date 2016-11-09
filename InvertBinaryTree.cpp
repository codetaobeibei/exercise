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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* temp;
        if(root!=NULL){
            invertTree(root->left);
            invertTree(root->right);
            temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
        return root;
    }
};
