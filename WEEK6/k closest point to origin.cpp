class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        vector<pair<double,int>> a;
        for(int i=0;i<p.size();i++){
            
            
            double x= sqrt(pow(p[i][0],2)+pow(p[i][1],2));
           
            a.push_back(make_pair(x,i));
        }
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        for(int i=0;i<k;i++){
            ans.push_back(p[a[i].second]);
        }
        return ans;
    }
};
