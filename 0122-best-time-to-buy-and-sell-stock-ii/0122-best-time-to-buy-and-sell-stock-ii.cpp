class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best_buy = prices[0];
        int max_profit = 0;

        for(int i = 1; i < prices.size(); i++){
            int profit = prices[i] - best_buy;
            if(profit > 0)
                max_profit += profit;
            
            profit = 0;
            best_buy = prices[i];
        }

        return max_profit;
    }
};