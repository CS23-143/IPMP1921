class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int a=max(seq);
        vector<int> ans(seq.size());
        int m=0;
        int i=0;
        for(int i=0;i<seq.size();i++){
        
            
            if(seq[i]=='(')
            {
                
                m++;
                if(m<=a/2)
                ans[i]=0;
            else
                ans[i]=1;}
            if(seq[i]==')'){
                if(m<=a/2)
                ans[i]=0;
            else
                ans[i]=1;
                m--;}
            
        }
       
       return ans; 
    }
private:int max(string s) {
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
