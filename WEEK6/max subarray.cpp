class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int s=nums[0];
        for(int i=1;i<nums.size();i++){
            s=max(nums[i],s+nums[i]);
            sum=max(sum,s);
        }
        return sum;
    }
};
