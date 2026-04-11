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
        vector<string> decoded;
        int i = 0;
        int j = 0;
        while(i < s.size()){
            if(s[i] != '#') i++;
            else{
                int jump = stoi(s.substr(j, i-j));
                decoded.push_back(s.substr(i+1, jump));
                i = i + jump + 1;
                j = i;
            }
        }
        return decoded;
    }
};
