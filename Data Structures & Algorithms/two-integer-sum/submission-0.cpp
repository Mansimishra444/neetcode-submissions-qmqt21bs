class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int ans,answ;
        for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        if(nums[i]+nums[j]==target ){
            ans=i;
            answ=j;
        }
       }
        }
        return {ans,answ};
    }
};
