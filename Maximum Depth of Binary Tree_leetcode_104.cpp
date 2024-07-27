class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int lh=1+maxDepth(root->left);
        int rh=1+maxDepth(root->right);
        return max(lh,rh);
        
    }
};
