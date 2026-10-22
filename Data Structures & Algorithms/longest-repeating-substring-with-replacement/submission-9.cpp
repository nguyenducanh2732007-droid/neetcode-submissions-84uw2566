class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_set<char> appeared;
        int arr[100] = {0};
        int length = 1; int result = 0;
        char main = s[0]; int right = 1; int left = 1; s = " " + s;
        arr[s[left]]++;
        appeared.insert(s[right]);
        while(right < s.size()){
            if(length - arr[main] > k){
                arr[s[left]]--;
                left++;
                length--;
                for (char x : appeared) {
                     if (arr[x] > arr[main]) main = x;
                }
            }
            else{
                right++; appeared.insert(s[right]);
                result = max(length, result);
                length++;
                arr[s[right]]++;
                if(arr[s[right]] > arr[main]) main = s[right];
            }
        } 
        return result;
    }
};
