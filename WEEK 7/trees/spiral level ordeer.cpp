class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
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
        for(int i=1;i<ans.size();i+=2){
            reverse(ans[i].begin(),ans[i].end());
        }
        return ans;
    }
};
    
