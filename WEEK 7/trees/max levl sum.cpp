class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> a;
        
       
           a.push(root);
        int t=INT_MIN;
        int k=1;
        int ii=1;
        while(!a.empty()){
            int j=a.size();
            int s=0;
            for(int i=0;i<j;i++){
                TreeNode* te=a.front();
                a.pop();
                s+=te->val;
                
                if(te->left)
                a.push(te->left);
                if(te->right)
                a.push(te->right);
            
            }
            if(s>t){
                t=s;
                k=ii;
            }
            ii++;
        }
        
        
        return k;
    }
};
