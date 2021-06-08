vector<int> Kdistance(struct Node *root, int k)
{
    queue<Node*> a;
    vector<int> ans;
    a.push(root);
    int i=0;
    while(!a.empty()&&i<k){
        int j=a.size();
        for(int i=0;i<j;i++){
            Node* y=a.front();
            a.pop();
            if(y->left)
            a.push(y->left);
            if(y->right)
            a.push(y->right);
        }
        i++;
        
    }
    while(!a.empty()){
        ans.push_back(a.front()->data);
        a.pop();
    }
    return ans;
  // Your code here
}
