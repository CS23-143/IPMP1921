class Solution {
   
public:
   
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int> ans;
        stack<TreeNode*> a;
        TreeNode* temp=root;
        while(temp!=nullptr||!a.empty()){
            while(temp!=nullptr)
            {
                a.push(temp);
                temp=temp->left;
            }
            temp=a.top();
            a.pop();
            ans.push_back(temp->val);
            
            temp=temp->right;
        }
        
        return ans;}

};
