class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int i,j;
        vector<int>ans;
        int max=a[n-1];
        for(int i=n-1;i>=0;i--){
            if(a[i]>=max){
                ans.push_back(a[i]);
                max=a[i];
            }
        }
        reverse(ans.begin(),ans.end());
        // Code here
        return ans;
        
    }
};
