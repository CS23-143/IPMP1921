int maximizingXor(int l, int r) {
    int max= INT_MIN;
    
    for(int a=l;a<=r;a++)
    {
        for(int b=a;b<=r;b++){
            if((a^b)>max)
            max = a^b;
        }
    }
    return max;
}
