class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++)
            a[nums[i]]++;
        int max=0,ans;
        for(auto i: a){
            if(max<i.second){
                ans=i.first;
                max=i.second;
            }
        }
        return ans;
    }
};
