int minimumAbsoluteDifference(vector<int> arr) {
    int ans=INT_MAX;
    sort(arr.begin(),arr.end());
    for(int i=1;i<arr.size();i++){
        if(arr[i]-arr[i-1]<ans)
        ans=arr[i]-arr[i-1];
        if(ans==0)
        return 0;
    }
    return ans;
    
}
