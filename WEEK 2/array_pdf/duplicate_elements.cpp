class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> a(nums.size()+1);
        vector <int> ans;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
            if(a[nums[i]]==2)
               ans.push_back(nums[i]); 
        }
        return ans;
    }
};
