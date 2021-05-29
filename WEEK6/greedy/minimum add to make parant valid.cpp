class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;int a=0;
        for(int i=0;i<s.size();i++){
            if(a<0&&s[i]=='('){
                c=c-a;
                a=0;
            }
            if(s[i]=='(')
                a++;
            else
                a--;
        }
        if(a<=0)
            c-=a;
        else
            c+=a;
        return c;
    }
};
