class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        unordered_set<int> hset;
        int min = nums[0];
        int max = min;
        for(int c : nums){
            if(c <= min) min = c;
            if(c >= max) max = c;
            hset.insert(c);
        }
        int count = 0;
        int current = 0;
        for(int i = min; i <= max; i++){
            if(hset.count(i)) count++;
            else{
                current = (current < count) ? count : current;
                count = 0;
            }
        }
        current = (current < count) ? count : current;
        return current;
    }
};
