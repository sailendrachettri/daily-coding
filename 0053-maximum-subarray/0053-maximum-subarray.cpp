class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, sum = 0;

        for(int val : nums){
            sum += val;

            ans = max(ans, sum);
            if(sum <= 0)
                sum = 0;
        }

        return ans;
    }
};