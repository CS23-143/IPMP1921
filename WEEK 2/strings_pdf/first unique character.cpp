
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> a(s.length());
        for(int i=0;i<s.length();i++){
            if(a[i]==0){
                int c=0;
                for(int j=i+1;j<s.length();j++){
                    if(s[i]==s[j]){
                        c++;
                        a[j]=1;
                    }}
                    if(c==0)
                        return i;
                
            }
        }
        return -1;
    }
};
//method2 hashing

