class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;

        for(int start = 0; start < nums.size(); start++){
            for(int end = start; end < nums.size(); end++){
                int sum = 0;
                int len = 0;
                for(int i = start; i <= end; i++){
                    sum += nums[i];
                    len++;
                }

                if(len >= l && len <= r && sum > 0)
                    ans = min(ans, sum);
            }
        }

        return ans == INT_MAX? -1 : ans;


    }
};