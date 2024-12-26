class Solution {
public:
    int maxProfit(vector<int>& p) {
        int max_profit = 0;
        int best_buy = p[0];
        int n = p.size();

        for(int i = 0; i < n-1; i++){
            if((p[i+1]-best_buy) > 0){
                max_profit += (p[i+1] - best_buy);
                best_buy = p[i+1];
            }

            best_buy = min(best_buy, p[i+1]);
        }

        return max_profit;
    }
};