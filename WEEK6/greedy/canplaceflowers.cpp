class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int s=0;
        int i=0;
       while(i<f.size()){
           if(f[i]==0&&(i==0||f[i-1]==0)&&(i==f.size()-1||f[i+1]==0)){
               f[i]=1;
               s++;
           }
           i++;
       }
        return s>=n;
    }
};
