vector<int> maximumPerimeterTriangle(vector<int> s) {
    vector<int> ans(3);
    int sum=0;
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            for(int k=j+1;k<s.size();k++){
                if(s[i]+s[k]>s[j]&&s[j]+s[k]>s[i]&&s[i]+s[j]>s[k]){
                    if(s[i]+s[j]+s[k]>sum||(s[i]+s[j]+s[k]==sum&&max(max(s[i],s[j]),max(s[j],s[k]))>max(max(ans[0],ans[1]),max(ans[1],ans[2])))||(s[i]+s[j]+s[k]==sum&&max(max(s[i],s[j]),max(s[j],s[k]))==max(max(ans[0],ans[1]),max(ans[1],ans[2]))&&min(min(s[i],s[j]),min(s[j],s[k]))<min(min(ans[0],ans[1]),min(ans[1],ans[2])))){
                        ans[0]=s[i];
                        ans[1]=s[j];
                        ans[2]=s[k];
                    }
                }
            }
        }
    }
    if(ans[0]==0)
    {   vector<int> p;
    p.push_back(-1);
        return p;}
    sort(ans.begin(),ans.end());
    return ans;
}
