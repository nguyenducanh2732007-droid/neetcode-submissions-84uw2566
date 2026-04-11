class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> a(256, 0);
        for(int i = 0; i < s.size();i++){
            a[s[i]-'0'] = a[s[i]-'0'] + 1;
        }
        for(int i = 0; i < t.size(); i++){
            if(!a[t[i]-'0']) return false;
            a[t[i]-'0'] = a[t[i]-'0'] - 1;
        }
        return true;
    }
};
