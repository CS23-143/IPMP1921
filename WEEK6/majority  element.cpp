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

//sorting
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

//divide and conquer
class Solution {
   
public:
    int majorityElement(vector<int>& nums) {
       int c=0;
       int cand=0;
        for(int num :nums){
            if(c==0)
                cand=num;
            c+= cand==num ? 1 : -1;
        }
        return cand;
    }
};


