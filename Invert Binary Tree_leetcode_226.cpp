/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void swaping(TreeNode* root){
        if (root==nullptr){
            return ;
        }
        TreeNode* t1=root->left;
        root->left=root->right;
        root->right=t1;
        swaping(root->left);
        swaping(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        swaping(root);
        return root;
    }
};
