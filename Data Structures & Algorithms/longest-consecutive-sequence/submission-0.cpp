class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
    int ans=0;
        unordered_set<int>seen(nums.begin(),nums.end());
      for(int num :nums){
        int s=0;
        int curr=num;
        while(seen.find(curr)!=seen.end()){
            s++;
            curr++;
        }
        ans=max(ans,s);
      }
      return ans;
    }
};
