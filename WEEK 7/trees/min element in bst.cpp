void minx(Node* root,int& min){
    if(root==nullptr)
    return ;
    if(root->data<min){
        min=root->data;
        
    }
    if(root->left)
    minx(root->left,min);
    if(root->right)
    minx(root->right,min);
}
int minValue(Node* root)
{
    int min=INT_MAX;
    minx(root,min);
    return min;
    // Code here
}
