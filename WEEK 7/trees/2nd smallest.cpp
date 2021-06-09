class Solution {
public:
    int k=0;
    void smin(TreeNode* root,long& m1,long& m2){
        if(root==nullptr)
            return;
        
        if(root->val<m1){
            m2=m1;
            m1=root->val;
        }
        if(m2>=root->val&&root->val>m1){
            if(root->val==INT_MAX)
           k=1;
            m2=root->val;}
        
        if(root->left)
            smin(root->left,m1,m2);
        if(root->right)
            smin(root->right,m1,m2);
    }
    int findSecondMinimumValue(TreeNode* root) {
        if(root==nullptr||!root->left&&!root->right)
            return -1;
        
        long m1=INT_MAX,m2=INT_MAX;
        smin(root,m1,m2);
        if(m2==INT_MAX&&k==0||m1==m2)
            return -1;
        
        return m2;
    }
};
