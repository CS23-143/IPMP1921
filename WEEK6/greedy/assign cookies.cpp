class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        int j=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        for(int i:s){
            if(g[j]<=i){
                ans++;
                j++;
                if(j==g.size())
                break;
                }
        }
        return ans;
    }
};
