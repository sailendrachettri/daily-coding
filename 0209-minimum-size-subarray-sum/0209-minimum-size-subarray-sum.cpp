class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int min_len = INT_MAX;

        int start = 0, end = 0;

        while(end < nums.size()){
            sum += nums[end++];

            while(sum >= target){
                min_len = min(min_len, end-start);
                sum -= nums[start++];
            }

        }

        return min_len == INT_MAX ? 0 : min_len;
    }
};