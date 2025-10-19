class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int ans = INT_MIN;

        for(int val : nums){
            sum += val;

            ans = max(ans, sum);

            if(sum < 0)
                sum = 0;
        }

        return ans;
    }
};