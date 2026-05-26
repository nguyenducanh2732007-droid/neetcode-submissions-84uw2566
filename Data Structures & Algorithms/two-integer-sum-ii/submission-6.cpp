class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while(i < j){
            int a = numbers[i], b = numbers[j];
            if(a + b < target and i < j) i++;
            if(a + b > target and i < j) j--;
            if(a + b == target) return {i + 1, j + 1};
        }
    }
};
