class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // unordered_map<int, vector<int>> hmap;
        // for(int i = 0; i < numbers.size(); i++) hmap[numbers[i]].push_back(i);
        // for(auto & pair : hmap){
        //     if(hmap.count(target - pair.first)){
        //         return {hmap[target - pair.first][hmap[target - pair.first].size() - 1] + 1, pair.second[0] + 1};
        //     }
        // }
        int n = numbers.size();
        for(int i = 0; i < n; i++){
            for(int j = n - 1; j > -1; j--){
                if(numbers[i] + numbers[j] == target) return{i + 1, j + 1};
            }
        }
    }
};