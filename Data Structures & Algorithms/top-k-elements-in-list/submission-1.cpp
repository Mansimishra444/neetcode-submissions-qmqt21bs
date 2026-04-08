class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
         vector<int>v;
        for(int n:nums){
            mp[n]++;
        }
        vector<pair<int, int>> pairs;
        for(auto pi:mp){
            pairs.push_back({pi.second, pi.first});
        }
        sort(pairs.rbegin(), pairs.rend());
        for(int i = 0; i < k; i++) {
            v.push_back(pairs[i].second);
        }
        return v;
    }
};
