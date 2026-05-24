class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp;
        map<char, int> kp;
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(!mp[t[i]]) return false;
            mp[t[i]]--;
        }
        return true;


    }
};
