class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<int, string> map;
        unordered_map<string, vector<string>> string_map;
        for(int i = 0; i < strs.size(); i++){
            string a = strs[i];
            sort(a.begin(), a.end());
            map[i] = a;
            string_map[a].push_back(strs[i]);
        }
        vector<vector<string>> results;
        for(auto& pair : string_map){
            results.push_back(pair.second);
        }
        return results;
    }
};
