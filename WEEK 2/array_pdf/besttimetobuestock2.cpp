class Solution {
public:
    int maxProfit(vector<int>& a) {
        int max=0,min=INT_MAX;
        for(int i=0;i<a.size()-1;i++){
            if(a[i+1]>a[i])
                max+=a[i+1]-a[i];
        }
        return max;
    }
};
