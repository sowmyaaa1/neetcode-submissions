class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m= t.length();
        map <char,int> mp;
        map <char,int> np;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<m;i++){
            np[t[i]]++;
        }
        if(mp==np){
            return true;
        }else{
            return false;
        }
    }
};
