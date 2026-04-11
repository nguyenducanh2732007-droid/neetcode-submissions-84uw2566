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
                string a;
                for(int j = i + 1; j <= i + jump; j++) a+=s[j];
                i = i + jump;
                decoded.push_back(a);
                jump = 0;
            }
        }
        return decoded;
    }
};
