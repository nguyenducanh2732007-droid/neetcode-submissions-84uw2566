class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> line(9);
        vector<unordered_set<char>> collumn(9);
        vector<vector<unordered_set<char>>> box(3, vector<unordered_set<char>>(3));
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                char c = board[i][j];
                int m = ceil(i/3);
                int n = ceil(j/3);
                if(line[i].count(c) or collumn[j].count(c) or box[m][n].count(c) ) return false;
                if(c!='.'){
                   line[i].insert(c);
                   collumn[j].insert(c);
                   box[m][n].insert(c);
                }
            }
        }
        return true;
    }
};
