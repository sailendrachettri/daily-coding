class Solution {
public:
    const int mod = 1e9 + 7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        unordered_set<int> s(arr.begin(), arr.end());
        unordered_map<int, int> dp;

        for(int x : arr) dp[x] = 1;

        for(int i : arr){
            for(int j : arr){
                if(j > sqrt(i)) break;
                if(i % j == 0 && s.find(i/j) != s.end()){
                    long long temp = (long long) dp[j] * dp[i/j];
                    if(i / j == j) {
                        dp[i] = (dp[i] + temp) % mod;

                    } else {
                        dp[i] = (dp[i] + temp * 2) % mod;
                    }
                }
            }
        }

        int res = 0;

        for( auto &[_, val] : dp){
            res = (res + val) % mod;
        }

        return res;
    }
};