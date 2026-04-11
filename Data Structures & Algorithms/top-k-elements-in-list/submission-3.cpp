class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hmap;
        int n = nums.size();
        for(int i = 0; i < n; i++) hmap[nums[i]]++;
        vector<vector<int>> buckets(n+1);
        for(auto & pair : hmap) buckets[pair.second].push_back(pair.first);
        vector<int> results;
        for(int i = n; i>=0; i--){
            for(int c : buckets[i]){
                results.push_back(c);
                if(results.size() == k) return results;
            }
        }
        return results;
    }
};
