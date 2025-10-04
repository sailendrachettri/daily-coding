class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr_sum = 0;
        double ans = INT_MIN;

        for(int i = 0; i < k; i++){
            curr_sum += nums[i];
        }

        ans = max(ans, curr_sum/k);

        for(int i = k; i < nums.size(); i++){
            curr_sum += nums[i];
            curr_sum -= nums[i-k];

            ans = max(ans, curr_sum/k);
        }

        return ans;
    }
};