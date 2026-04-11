class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hsm;
        for ( int i = 0; i < nums.size(); i++){
            if(hsm.count(nums[i])) return true;
            hsm[nums[i]] = i;
        }
        return false;
    }
};