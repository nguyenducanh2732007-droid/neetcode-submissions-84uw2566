class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> us;
        int left = 0; int right = 0; unsigned long length = 0;
        while(right < s.size()){
            if(!us.count(s[right])){
                us.insert(s[right]);
                right++; length = max(length, us.size());
            }
            else{
                us.erase(s[left]);
                left++;
            }
        }
        return length;
    }
};
