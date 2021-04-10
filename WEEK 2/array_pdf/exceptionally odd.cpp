class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        int a;
        for(int i=0;i<n;i++){
            
            if(i==0||arr[i]!=arr[i-1]){
                a=1;
            }
            else
            a++;
            if(arr[i]!=arr[i+1]&&a%2!=0)
            return arr[i];
        }
        return -1;
    }
};
