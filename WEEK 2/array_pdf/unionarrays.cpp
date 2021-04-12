class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int s[n+m];
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0,k=0;
        while(i<n&&j<m){
            if(a[i]<b[j]&&a[i]!=s[k-1]){
                s[k]=a[i];
                i++;k++;
            }
            if(a[i]>b[j]&&b[j]!=s[k-1]){
                s[k]=b[j];
                j++;k++;
            }
            if(a[i]==b[j]&&a[i]!=s[k-1]){
                s[k]=a[i];
                k++;i++;
                
                j++;
            }
    
}
    while(i<n){
        s[k]=a[i];
        i++;
        k++;
    }
    while(j<m&&k<(m+n)){
        s[k]=b[j];
        j++;k++;
    }
    return k;
//code here
    }
};
