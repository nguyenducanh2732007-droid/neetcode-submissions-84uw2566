class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[150] = {0};
        if(s.empty()) return 0;
        s = " " + s;
        int l = 1, r = 2;
        int length = 1;
        int result = 1;
        arr[s[l]] = l;
        for( ; r < s.size(); r++){
            if(arr[s[r]] >= l){
                l = arr[s[r]] + 1;
                arr[s[r]] = r;
                result = max (result, r - l + 1);
                length = r - l + 1;
            }
            else{
                arr[s[r]] = r;
                length++;
                result = max(result, length);
            }
        }
        return result;
    }
};
