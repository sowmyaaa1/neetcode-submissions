class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(), s.end(), ' '),s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string k;
        for(char ch:s){
            if(isalnum(ch)){
                k+=ch;
            }
        }
        cout<<k;
        string t=k;
        reverse(t.begin(), t.end());
        if(k==t){
            return true;
        }
        return false ;
    }
};
