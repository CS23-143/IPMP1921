class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr)
            return 0;
        if(root->left==nullptr&&root->right==nullptr)
            return 1;
        else if(root->left==nullptr)
            return 1+maxDepth(root->right);
        else if(root->right==nullptr)
            return 1+maxDepth(root->left);
        else
            return max(1+maxDepth(root->left),1+maxDepth(root->right));
    }
};
