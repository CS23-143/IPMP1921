class Solution {
public:
    int maxDepth(string s) {
        int c=0,a=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                c++;
            if(s[i]==')')
                c--;
            if(c>a)
                a=c;
        }
        return a;
    }
};
