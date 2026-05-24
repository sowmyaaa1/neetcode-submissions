class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ctr;
        int n=strs.size();
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<n;i++){
            vector<string> ktr;
            string s=strs[i];
            sort(s.begin(), s.end());
            for(int j=0;j<n;j++){
                string k=strs[j];
                sort(k.begin(), k.end());
                if(k==s){
                    ktr.push_back(strs[j]);
                }
            }
            mp[s]=ktr;

        }
        for(auto it: mp){
            vector<string> kp = it.second;
            ctr.push_back(kp);
        }
        return ctr;

    }
};
