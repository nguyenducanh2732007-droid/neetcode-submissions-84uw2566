class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int p = matrix.size();
       int q = matrix[0].size();
       int l = 0, r = q*p - 1;
       while(l <= r){
         int m = (l+r)/2;
         if(matrix[m/q][m%q] > target) r = m - 1;
         else if(matrix[m/q][m%q] < target) l = m + 1;
         else return true;
       }
       return false;
    }
};
