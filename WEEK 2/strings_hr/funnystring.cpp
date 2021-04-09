string funnyString(string s) {
    vector<int> a;
    for(int i=1;i<s.size();i++){
        a.push_back(abs(int(s[i])-int(s[i-1])));
    }
    for(int i=0;i<a.size()/2;i++){
        if(a[i]!=a[a.size()-i-1])
        return "Not Funny";
    }
    return "Funny";

}
