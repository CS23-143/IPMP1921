class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root!=nullptr){
            ans.push_back(root->val);
        if(root->left!=nullptr)
            preorderTraversal(root->left);
        if(root->right!=nullptr)
            preorderTraversal(root->right);}
        return ans;
    }
};
