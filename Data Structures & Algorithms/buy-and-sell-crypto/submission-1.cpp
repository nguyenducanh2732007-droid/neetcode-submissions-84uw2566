class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = prices[0];
        int profit = 0;
        for(int a : prices){
            minp = min (minp, a);
            profit = max(profit, a - minp);
        }
        return profit;
    }
};
