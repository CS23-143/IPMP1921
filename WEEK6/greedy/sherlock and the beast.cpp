void decentNumber(int n) {
    int k=n/3;
    int i;
    for(i=k;i>=0;i--){
        if((n-3*i)%5==0)
        break;
    }
    if(i==-1)
    cout<<-1;
    else{
        for(int j=0;j<3*i;j++)
        cout<<5;
        for(int j=3*i;j<n;j++)
        cout<<3;
    }
    cout<<endl;
}
