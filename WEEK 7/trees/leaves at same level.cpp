class Solution{
  public:
    /*You are required to complete this function*/
    int maxh(Node* root){
        if(root==nullptr)
        return 0;
        return 1+max(maxh(root->left),maxh(root->right));
    }
    int minh(Node* root){
        if(root==nullptr)
        return INT_MAX;
        if(!root->left && !root->right)
        return 1;
        return 1+min(minh(root->left),minh(root->right));
    }
    int check(Node *root)
    {
        return maxh(root)==minh(root);
       //Your code here
    }
};
