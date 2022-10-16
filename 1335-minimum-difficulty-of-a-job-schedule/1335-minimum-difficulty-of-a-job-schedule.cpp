class Solution {
public:
    int minDifficulty(vector<int>& jobs, int d) {
        
        int n = jobs.size();
        
        if(d > n)
            return -1;
        
        int dp[d][n];
        
        int maxAll = 0;
        for(int i = 0; i  < n; i++)
        {
            maxAll = max(maxAll, jobs[i]);
            dp[0][i] = maxAll;
        }
        
        for(int i = 1; i < d; i++)
        {
            for(int j = i; j < n; j++)
            {
                int mini = dp[i-1][j-1] + jobs[j];
                int maxi = jobs[j];
                
                for(int k = j; k >= i; k--)
                {
                    maxi = max(maxi, jobs[k]);
                    mini = min(mini, dp[i-1][k-1] + maxi);
                }
                dp[i][j] = mini;
            }
        }
        
        return dp[d-1][n-1];
    }
};