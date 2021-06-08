vector<int> leftView(Node *root)
{
    queue<Node*> a;
    vector<int> ans;
        if(root==nullptr||root->left==nullptr&&root->right==nullptr)
            return ans;
        a.push(root);
        
        
        
        while(!a.empty()){
            int j=a.size();
            
            for(int i=0;i<j;i++){
                Node*te=a.front();
                if(i==0){
                    
                    ans.push_back(te->data);
                    
                }
                a.pop();
                if(te->left)
                    a.push(te->left);
                if(te->right)
                    a.push(te->right);
                
                   
                
            }
            
            
            
        }
        return ans;
   // Your code here
}
