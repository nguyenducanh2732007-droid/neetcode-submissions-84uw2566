class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string s : strs){
            string a = to_string(s.size());
            encoded = encoded+a+"#"+s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        int jump = 0;
        vector<string> decoded;
        for(int i = 0; i < s.size(); i ++){
            char c = s[i];   
            if(c!='#') jump = jump*10  + (c-'0');
            else{
                decoded.push_back(s.substr(i+1,jump));
                i = i + jump;
                jump = 0;
            }
        }
        return decoded;
    }
};
