class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int n = nums.size();
        long ans = 0;
        
        vector<unordered_map<long, long> > dp(n);
        
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                long diff = (long) nums[i] - (long) nums[j];
                long sum = 0;
                
                if(dp[j].count(diff) )
                {
                    sum = dp[j][diff];
                }
                
                dp[i][diff] += 1 + sum;
                ans += sum;
            }
        }
        
        return ans;
    }
};