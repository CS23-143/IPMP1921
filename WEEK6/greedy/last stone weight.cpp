class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        if(s.size()==1)
            return s[0];
        else{
        for(int i=0;i<s.size();i++){
            sort(s.begin(),s.end());
            s[s.size()-1]-=s[s.size()-2];
            s[s.size()-2]=0;
        }
        return s[s.size()-1];}
    }
};
