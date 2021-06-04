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

int height(TreeNode* root){
        if(root==NULL) return 0;
        int l = height(root->left);
        int r = height(root->right);
        int m=max(l,r);
         return m+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        int d1=lh+rh;
        
        int lr =diameterOfBinaryTree(root->left);
        int rr= diameterOfBinaryTree(root->right);
        int d2 = max(lr,rr);
        
        return max(d1,d2);
    }
