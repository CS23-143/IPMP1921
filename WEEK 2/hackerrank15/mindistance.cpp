int minimumDistances(vector<int> a) {
    int min=INT_MAX;
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]==a[j]){
                if(min>(j-i))
                min=j-i;
            }
        }
    }
    if(min==INT_MAX)
    return -1;
    else
    return min;

}
