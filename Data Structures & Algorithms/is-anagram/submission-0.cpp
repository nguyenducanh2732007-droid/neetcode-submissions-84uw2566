class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_multiset<char> set;
        for(char c : s) set.insert(c);
        for(char c : t){
            if(!set.count(c)){
                return false;
            }
            if(set.find(c)!=set.end()){
                set.erase(set.find(c));
            }
        }
        return true;
    }
};
