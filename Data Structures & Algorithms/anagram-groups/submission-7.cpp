class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram;
        anagram.reserve(strs.size());
        for(string & a : strs){
            string key(26, 0);
            for(char & c : a) key[c - 'a']++;
            anagram[key].push_back(a);
        }
        vector<vector<string>> results;
        results.reserve(strs.size());
        for(auto & pair : anagram) results.push_back(move(pair.second));
        return results;
    }
};
