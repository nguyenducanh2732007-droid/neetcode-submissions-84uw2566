class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int p = matrix.size();
        int q = matrix[0].size();
        int ri = 0, rj = p - 1;
        int m;
        while(ri <= rj){
            m = (ri + rj)/2;
            if (matrix[m][0] > target) rj = m - 1;
            else if (matrix[m][0] < target) ri = m + 1;
            else return true;
        }
        m = ri - 1;
        if(m < 0) return false;
        int pi = 0, pj = q - 1;
        int n;
        while(pi <= pj){
            n = (pi+pj)/2;
            if(matrix[m][n] > target) pj = n - 1;
            else if(matrix[m][n] < target) pi = n + 1;
            else return true;
        }
        return false;
    }
};
