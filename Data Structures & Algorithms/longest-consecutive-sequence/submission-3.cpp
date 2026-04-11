class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        unordered_set<int> num;
        int max = 0;
        int min = nums[0];
        for(int i = 0; i < nums.size(); i++) num.insert(nums[i]);
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]>=max) max = nums[i];
            if(nums[i]<=min) min = nums[i];
        }
        vector<int> value;
        int count = 0;
        for(int i = min ; i<= max; i++){
            if(num.count(i)) count++;
            else{
                value.push_back(count);
                count = 0;
            }
            if(i == max) value.push_back(count);
        }
        int max_value = 0;
        for(int a : value){
            if(a > max_value) max_value = a;
        }
        return max_value;
    }
};
