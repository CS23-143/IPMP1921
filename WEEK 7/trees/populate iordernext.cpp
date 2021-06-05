class Solution
{
public:
    
    Node * ans=nullptr;
    void populateNext(Node *root)
    {
        if(root==nullptr) return;
        if(root->left)
        populateNext(root->left);
        if(ans) ans->next=root;
        ans=root;
        populateNext(root->right);
        
        
        
        //code here
    }
};
