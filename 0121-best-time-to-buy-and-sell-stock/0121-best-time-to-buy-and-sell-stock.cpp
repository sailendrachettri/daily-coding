class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int buy = prices[0];
        int n = prices.size();

        for(int i = 0; i < n-1; i++){
            max_profit = max(max_profit, prices[i+1]-buy);
            buy = min(buy, prices[i+1]);
        }

        return max_profit;
    }
};