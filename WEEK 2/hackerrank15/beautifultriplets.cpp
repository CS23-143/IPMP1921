int beautifulTriplets(int d, vector<int> arr) {
    int c=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]-arr[i]==d){
                for(int k=j+1;k<arr.size();k++)
                    {
                        if(arr[k]-arr[j]==d)
                        c++;
    
}            }
        }
    }
    return c;

}
