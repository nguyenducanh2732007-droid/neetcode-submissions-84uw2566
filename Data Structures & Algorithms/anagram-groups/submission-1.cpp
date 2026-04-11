class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> results;
        unordered_map<int, string> map;
        for(int i = 0; i < strs.size(); i++){
            string a = strs[i];
            sort(a.begin(), a.end());
            map[i] = a;
        }
        unordered_map<string, int> set;
        int k = 0;
        for(int i = 0; i < strs.size(); i++){
            if(!set.count(map[i])) {
                vector<string> newone;
                set[map[i]] = k;
                newone.push_back(strs[i]);
                results.push_back(newone);
                k++;
            }
            else {
                results[set[map[i]]].push_back(strs[i]);
            }     
        }
        return results;
    }
};
