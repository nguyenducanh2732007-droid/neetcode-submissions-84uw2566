class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        for(int i =0; i< nums.size(); i++){
            if(a.count(nums[i])){
                return true;
            }
            a.insert(nums[i]);
        }
        return false;
    }
};