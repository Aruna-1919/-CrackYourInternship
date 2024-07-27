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
    void paths(TreeNode* root,vector<string>& ans,string s){
        if(root==nullptr){
            return;
        }
        s+=to_string(root->val);
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(s);
        }
        else{
            s+="->";
            paths(root->left,ans,s);
            paths(root->right,ans,s);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s="";
        paths(root,ans,s);
        return ans;
    }
};
