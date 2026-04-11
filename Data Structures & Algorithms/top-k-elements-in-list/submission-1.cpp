class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hmap;
        for(int i = 0; i < nums.size(); i++){
            hmap[nums[i]]++;
        }
        vector<int> a;
        while(k--){
            int max = 0;
            int xam = 0;
            for(auto & pair : hmap){
                if(pair.second > max){
                    max = pair.second;
                    xam = pair.first;
                }
            }
            a.push_back(xam);
            hmap.erase(xam);
        }
        return a;
    }
};
