class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int buy_stock = prices[0];

        for(int i = 1; i < prices.size(); i++){
            max_profit = max(max_profit, (prices[i] - buy_stock));
            buy_stock = min(buy_stock, prices[i]);
        }

        return max_profit;
    }
};