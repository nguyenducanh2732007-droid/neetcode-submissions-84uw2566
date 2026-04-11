class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(!nums[i]) zero++;
        }
        if(zero > 1) return vector<int>(nums.size(), 0);
        if(zero == 1){
            int products = 1;
            int a;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i]){
                    products *= nums[i];
                    nums[i] = 0;
                }
                else a = i;
            }
            nums[a] = products;
            return nums;
        }
        if(!zero){
            int products = 1;
            for(int i = 0; i < nums.size(); i++) products *= nums[i];
            for(int i = 0; i < nums.size(); i++){
                nums[i] = products/nums[i];
            }
            return nums;
        }
    }
};
