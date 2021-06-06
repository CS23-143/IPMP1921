class Solution {
public:
    
    void ps(TreeNode* root,vector<int>& ans){
        if(root==nullptr)
            return;
        if(root->left)
            ps(root->left,ans);
        if(root->right)
            ps(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==nullptr)
            return ans;
        ps(root,ans);
        return ans;
    }
};
