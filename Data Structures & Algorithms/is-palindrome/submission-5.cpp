class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            while(!isalnum(s[i]) and i < j) i++;
            while(!isalnum(s[j]) and i < j) j--;
            char a = tolower(s[i]);
            char b = tolower(s[j]);
            if(a==b){
                i++;
                j--;
            }  
            else return false;
        }
        return true;
    }
};
