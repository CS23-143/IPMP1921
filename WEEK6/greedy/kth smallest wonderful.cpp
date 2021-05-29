class Solution {
public:
    int getMinSwaps(string num, int k) {
        string s=num;
        while(k--)
            next_permutation(s.begin(),s.end());
        int i=0;
        int j=0,r=0;
        while(i<s.size()){
            j=i;
            while(num[i]!=s[j])
                j++;
            while(j>i){
                swap(s[j],s[j-1]);
                j--;
                r++;
            }
            i++;
        }
        return r;
        
    }
};
