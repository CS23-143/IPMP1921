class Solution{
  public:
  int i=0;
  void in(Node* root,vector<Node*>& a){
      if(root==nullptr)
      return;
      if(root->left)
      in(root->left,a);
      a.push_back(root);
      if(root->right)
      in(root->right,a);
  }
 
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        vector<Node*>a;
        in(root,a);
        int i=0;
        while(i<a.size()&&x!=a[i])
        i++;
        if(i>=a.size()-1)
        return nullptr;
        return a[i+1];
        //Your code here
    }
};
