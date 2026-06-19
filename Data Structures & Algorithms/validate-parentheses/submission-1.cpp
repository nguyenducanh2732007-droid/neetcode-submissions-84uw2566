class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> um = {{')','('},{'}','{'},{']','['}};
        for(char c : s){
            if(c == '(' or c == '[' or c == '{'){
                stk.push(c);
            }
            else{
                if(stk.empty()) return false;
                if(um[c] == stk.top()) stk.pop();
                else return false;
            }
        }
        if(!stk.empty()) return false;
        return true;
    }
};
