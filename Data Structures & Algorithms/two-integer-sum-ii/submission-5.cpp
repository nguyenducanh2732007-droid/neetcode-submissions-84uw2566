class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0;
        int j = n - 1;
        while(i < j){
            while(numbers[i] + numbers[j] > target and i < j) j--;
            while(numbers[i] + numbers[j] < target  and i < j) i++;
            if(numbers[i] + numbers[j] == target) return {i+1,j+1};
        }
    }
};