class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(string s : strs) encoded_string = encoded_string + s + ".";
        //encoded_string.pop_back();
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> strs2;
        string run = "";
        for(char c : s){
            if(c != '.') run += c;
            else {
                strs2.push_back(run);
                run = "";
            }
        }
        return strs2;
    }
};
