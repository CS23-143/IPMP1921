class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return m(root,root);
    }
    bool m(TreeNode* t1,TreeNode* t2){
        if(t1==nullptr&&t2==nullptr) return true;
        if(t1==nullptr||t2==nullptr) return false;
        return t1->val==t2->val&&m(t1->left,t2->right)&&m(t1->right,t2->left);
    }
};
