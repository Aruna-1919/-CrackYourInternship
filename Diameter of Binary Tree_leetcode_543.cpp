class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node* root,int& max_he){
        if(root==NULL){
            return 0;
        }
        int lh=height(root->left,max_he);
        int rh=height(root->right,max_he);
        max_he = max(max_he, lh + rh+1);
        
        return 1+max(lh,rh);
        
    }
    int diameter(Node* root) {
        // Your code here
        int max_he=INT_MIN;
        int h=height(root,max_he);
        return max_he;
    }
};
