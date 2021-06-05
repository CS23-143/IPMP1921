class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> a;
        
       if(root==nullptr)
    return ans;
           a.push(root);
        while(!a.empty()){
            int j=a.size();
            
            double k=0;
            for(int i=0;i<j;i++){
            
                TreeNode* te=a.front();
                a.pop();
                k+=te->val;
                
                if(te->left)
                a.push(te->left);
                if(te->right)
                a.push(te->right);
            
            }
            k/=j;
            ans.push_back(k);
            
        }
        return ans;
    }
};
