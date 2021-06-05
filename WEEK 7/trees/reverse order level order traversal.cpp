class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> a;
        vector<vector<int>> ans;
       if(root==nullptr)
    return ans;
           a.push(root);
        while(!a.empty()){
            int j=a.size();
            vector<int> p;
            for(int i=0;i<j;i++){
                TreeNode* te=a.front();
                a.pop();
                p.push_back(te->val);
                
                if(te->left)
                a.push(te->left);
                if(te->right)
                a.push(te->right);
            
            }
            ans.push_back(p);
            p.clear();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
