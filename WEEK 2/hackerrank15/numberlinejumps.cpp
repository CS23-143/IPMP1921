string kangaroo(int x1, int v1, int x2, int v2) {
    
    for(long i=0;i<10000;i++){
        if(x1+i*v1==x2+i*v2)
        return "YES";
    }
    return "NO";

}
