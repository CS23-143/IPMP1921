int migratoryBirds(vector<int> arr) {
    sort(arr.begin(),arr.end());
    vector <long> count(arr.size(),0);
    vector <int> a(arr.size(),0);
    int j=0;
    
   
    for(int i=0;i<arr.size();i++){
        if(i==0){
        count[0]=1;
        a[j]=arr[i];}
        else{
        if(arr[i]==arr[i-1])
        count[j]=count[j]+1;
        else{
            j++;
            count[j]=1;
            a[j]=arr[i];
        }}
        
    }
    int m=0;
    for(int k=0;k<count.size();k++){
        if(count[k]>count[m]){
            m=k;
        }
    }
    return a[m];

}
