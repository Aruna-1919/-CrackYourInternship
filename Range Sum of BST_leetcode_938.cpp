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
    void recursion(TreeNode* root, int low, int high,int& sum){
        if(root==nullptr){
            return;
        }
        if(root->val>=low && root->val<=high){
            sum=sum+root->val;
            recursion(root->left,low,high,sum);
            recursion(root->right,low,high,sum);
        }
        else if(root->val<low){
            recursion(root->right,low,high,sum);
        }
        else if(root->val>high){
            recursion(root->left,low,high,sum);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        recursion(root,low,high,sum);
        return sum;
    }
};
