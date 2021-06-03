class Solution {
public:
    int s=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        if(root==nullptr)
            return 0;
       
        rangeSumBST(root->left, low,high);
        rangeSumBST(root->right, low,high);
        
        if(root->val>=low&&root->val<=high)
            s+=root->val;
        return s;
        
    }
};
