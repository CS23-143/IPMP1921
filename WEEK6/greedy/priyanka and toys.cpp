int toys(vector<int> w) {
    sort(w.begin(),w.end());
    int i=0;
    int ans=1;
    int min=w[0];
    while(i<w.size()){
        if(w[i]-min>4){
            ans++;
            min=w[i];
        }
        i++;
    }
    return ans;
}
