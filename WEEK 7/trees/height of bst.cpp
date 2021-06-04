class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node==nullptr)
    return 0;
    if(node!=nullptr&&node->left==nullptr&&node->right==nullptr)
    return 1;
    else
    return 1+max(height(node->left),height(node->right));
        // code here 
    }
};
