int camelcase(string s) {
    int c=1;
    for(int i=0;i<s.length();i++){
        if(int(s[i])<=90)
        c++;
    }
    return c;

}
