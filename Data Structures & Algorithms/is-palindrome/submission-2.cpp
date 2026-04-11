class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i<j){
            while(!isalnum(s[i]) and i < j) i++;
            while(!isalnum(s[j]) and i < j) j--;
            char a = s[i];
            char b = s[j];
            if(!((a==b) or (toupper(a) == b) or (tolower(a)==b))) return false;
            i++;
            j--;
        }
        return true;
    }
};
