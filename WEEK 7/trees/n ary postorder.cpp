class Solution {
public:
    void ps(Node*root,vector<int>& ans){
        for(int i=0;i<root->children.size();i++){
            ps(root->children[i],ans);
        }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(root==nullptr)
            return ans;
        ps(root,ans);
        return ans;
            
            
    }
};
