int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
    bool a= true;
    int max=0;
    for(int i =0;i<keyboards.size();i++){
        for(int j =0;j<drives.size();j++){
            if(keyboards[i]+drives[j]<=b){
                a=false;
                if(max<(keyboards[i]+drives[j]))
                max=keyboards[i]+drives[j];
            }
        }
    }
    if(a)
    return -1;
    else
    return max;
}
