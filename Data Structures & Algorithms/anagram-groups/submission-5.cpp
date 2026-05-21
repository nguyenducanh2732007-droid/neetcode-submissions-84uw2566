class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> umap;
        for(int i = 0; i < n; i++){
            string u = strs[i];
            sort(u.begin(), u.end());
            umap[u].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto & pair : umap) result.push_back(pair.second);
        return result;
    }
};
