class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
        queue<Node*> a;
        if(root==nullptr)
        return 0;
        a.push(root);
        int odd=0;
        int even=0;
        int k=0;
        while(!a.empty()){
            k++;
            int j=a.size();
            for(int i=0;i<j;i++){
                Node* t=a.front();
                a.pop();
                if(k%2!=0)
                odd+=t->data;
                if(k%2==0)
                even+=t->data;
                if(t->left)
                a.push(t->left);
                if(t->right)
                a.push(t->right);
            }
            
        }
        return odd-even;
       //Your code here
    }
};
