class Solution {
public:
    int numSquares(int n) {
        int sqrt_n = sqrt(n);
        if(sqrt_n * sqrt_n == n) return 1;

        vector<int> dp(n+1, 4);

        for(int i = 1; i <= sqrt_n; i++){
            dp[i*i] = 1;
        }

        for(int i = 1; i <= n; i++){
            if(dp[i] == 1) continue;
            int sqrt_i = sqrt(i);
            int x = 4;

            for(int j = 1; j <= sqrt_i; j++){
                x = min(x, 1+dp[i-j*j]);
                if(x == 1) break;
            }
            dp[i] = x;
        }

        return dp[n];
    }
};