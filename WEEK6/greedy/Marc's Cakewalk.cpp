long marcsCakewalk(vector<int> calorie) {
    sort(calorie.begin(),calorie.end(),greater<int>());
    long long a=0;
    for(int i=0;i<calorie.size();i++){
        a+=pow(2,i)*calorie[i];
    }
    return a;
}
