int lonelyinteger(vector<int> a) {
    int k=a[0];
    for(int i=1;i<a.size();i++)
    k=k^a[i];
    return k;
}
