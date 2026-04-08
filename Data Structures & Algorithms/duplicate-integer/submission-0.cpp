class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int c:nums){
            mp[c]++;
        }
        for(auto pi:mp){
            if(pi.second>1){
                return true;
            }
        }
        return false;
    }
};