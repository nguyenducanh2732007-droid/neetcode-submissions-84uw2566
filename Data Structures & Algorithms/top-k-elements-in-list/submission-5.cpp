class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> elements;
        elements.reserve(nums.size());
        for(int & a : nums) elements[a]++;
        vector<int> results;
        results.reserve(k);
        vector<vector<int>> buckets(n + 1);
        for(auto & pair : elements){
            buckets[pair.second].push_back(pair.first);
        }
        for(int i = n; i > 0; i--){
            for(int & c : buckets[i]){
                results.push_back(c);
                if(results.size() == k) return results;
            }
        }
        return results;
    }
};
