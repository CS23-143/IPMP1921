int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
    int i=p/2;
    int j=(n-p)/2;
    if(i<=j)
    return i;
    else {
        if(j==0&&n%2==0&&p%2!=0)
        return 1;
        else
    return j;
    }
}
