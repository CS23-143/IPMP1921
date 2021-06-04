class Solution {
public:
    int height(TreeNode* root){
        return root==nullptr?0:1+max(height(root->left),height(root->right));
    }
    void ans(TreeNode* root,int& a){
        if(!root)
            return;
        else if(root->left&&root->right) 
            a= max(a,height(root->left)+height(root->right));
        else if(!root->left&&root->right)
            a= max(a,height(root->right));
        else
            a=max(a,height(root->left));
        ans(root->left,a);
        ans(root->right,a);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int a=0;
        ans(root,a);
        return a;
    }
};
