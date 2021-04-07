vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> a;
    for(int i=0;i<d;i++){
        a.push_back(arr[i]);
    }
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(i<arr.size()-d){
            arr[i]=arr[i+d];
        }
        else{
            arr[i]=a[j];
            j++;
        }
    }
    return arr;
}
