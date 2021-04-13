class Solution {
public:
    int maxProfit(vector<int>& p) {
        int max=0;int min=INT_MAX;
        for(int i=0;i<p.size();i++){
            if(p[i]<min)
                min=p[i];
            else if(p[i]-min>max)
                max=p[i]-min;
        }
        return max;
    }
};
