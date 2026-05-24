class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> str;
        for(string it:strs){
            string s=it;
            sort(it.begin(),it.end());
            mp[it].push_back(s);
        }
        for(auto gh:mp){
            str.push_back(gh.second);
        }
        return str;
    }
};
