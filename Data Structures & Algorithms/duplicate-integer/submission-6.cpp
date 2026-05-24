class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> seen;
        for(int it:nums){
             if(seen.count(it)) return true;
             seen.insert(it);
        }
        return false;
    }
};