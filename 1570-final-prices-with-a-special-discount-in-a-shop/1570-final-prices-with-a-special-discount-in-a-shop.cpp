class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int dis;
        int n = prices.size();

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){ 
                dis = prices[j];
                dis = min(dis, prices[j]);

                if(prices[j] <= prices[i])
                    break;
            }

            if(dis > prices[i]){
                dis = 0;
            }
            cout << "dis " << dis << endl;

            prices[i] = prices[i]-dis;
            dis = 0;
        }

        return prices;
    }
};