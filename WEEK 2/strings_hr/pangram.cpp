string pangrams(string s) {
    transform(s.begin(),s.end(),s.begin(),::tolower);
    remove(s.begin(),s.end(),' ');
    char ch='a';
    
    while(ch<='z'){
        if(s.find(ch)==std::string::npos)
        return "not pangram";
        ch++;
        
    }
    return "pangram";

}
