class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int left = 0, right = 0;
        int profit = 0;
        while(i != prices.size()){
            if(prices[i] >= prices[right]) right = i;
            if(prices[i] < prices[left]) left = i;
            if(left > right) right = left;
            int current_profit = prices[right] - prices[left];
            if(current_profit > profit) profit = current_profit;
            i++;
        }
        return profit;
    }
};
