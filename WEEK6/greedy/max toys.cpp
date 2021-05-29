int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(),prices.end());
    int ans=0;
    int a=prices[0];
    int i=1;
    while(a<k){
        ans++;
        a+=prices[i];
        i++;
    }
    return ans;
}
