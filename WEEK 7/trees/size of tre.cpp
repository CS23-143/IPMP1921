int getSize(Node* node)
{
    if(node==nullptr)
    return 0;
    else if(node->left==nullptr&&node->right==nullptr)
    return 1;
    else
    return 1+getSize(node->left)+getSize(node->right);
    
   // Your code here
}
