string hackerrankInString(string s) {
    string a="hackerrank";
    int j=0;
    int i=0;
    while(j<s.size()){
        if(a[i]==s[j])
        i++;
        j++;
    }
    if(i!=a.size())
    return "NO";
    else return "YES";
}
