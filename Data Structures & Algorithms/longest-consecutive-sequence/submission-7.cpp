class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hset(nums.begin(), nums.end());
        int max = 0;
        for(int & c : nums){
            if(hset.find(c-1) == hset.end()){
                int curr = c;
                int count = 0;
                while(hset.find(curr) != hset.end()){
                    curr++;
                    count++;
                }
                max = (count < max) ? max : count;
            }
        }
        return max;
    }
};
