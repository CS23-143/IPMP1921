int maxMin(int k, vector<int> arr) {
    int m=INT_MAX;
    sort(arr.begin(),arr.end());
    for(int i=0;i<=arr.size()-k;i++){
        if(arr[i+k-1]-arr[i]<m)
        m=arr[i+k-1]-arr[i];
    }
    return m;
}
