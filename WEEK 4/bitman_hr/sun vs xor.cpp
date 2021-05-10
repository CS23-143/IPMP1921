//bruteforce
long sumXor(long n) {
    int ct=0;
    for(int c=0;c<=n;c++){
        if((c^n)==c+n)
        ct++;
    }
    return ct;
}
