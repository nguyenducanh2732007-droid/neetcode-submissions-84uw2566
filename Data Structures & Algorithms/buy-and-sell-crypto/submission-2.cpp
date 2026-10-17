class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 0, max = 0;
        while(r < prices.size()){
            int dis = prices[r] - prices[l];
            if(dis < 0) l = r;
            if(dis > max) max = dis;
            r++;
        }
        return max;
    }
};
