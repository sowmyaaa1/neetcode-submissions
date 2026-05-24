class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<pair<int, int>> ret;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            ret.push_back({it.second, it.first});
        }
        sort(ret.rbegin(), ret.rend());
        vector<int> hut;
        for(int i=0;i<k;i++){
            hut.push_back(ret[i].second);
        }
        return hut;
    }
};
