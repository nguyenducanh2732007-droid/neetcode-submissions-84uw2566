class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> set;
        for(int i = 0; i < nums.size(); i++){
            if(set.count(nums[i])) return {set[nums[i]], i}; 
            set.insert({target-nums[i], i});
        }
    }
};
