class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, best_buy = prices[0];

        for(int i = 1; i < prices.size(); i++){
            max_profit = prices[i] - best_buy > 0 ? max((prices[i] - best_buy), max_profit) : max_profit;
            cout << max_profit << " " << best_buy << endl;
            best_buy = min(best_buy, prices[i]);
        }

        return max_profit;
    }
};