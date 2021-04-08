string Solution::solve(string s) {
    vector<string> a;
    string str="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=' ')
        str+=s[i];
        if(s[i+1]==' '&&str!=""||((i==s.size()-1)&&str!="")){
            a.push_back(str);
            str="";
        }
        
    }
    str="";
    reverse(a.begin(),a.end());
    for(int j=0;j<a.size();j++){
        str+=a[j];
        if(j<a.size()-1)
        str+=' ';
    }
    return str;
}
