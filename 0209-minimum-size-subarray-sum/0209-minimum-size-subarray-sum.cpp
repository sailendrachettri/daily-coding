class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0, end = 0;
        int sum = 0, len = INT_MAX;

        while(end < nums.size()){
            sum += nums[end];

            while(sum >= target){
                len = min(len, end-start+1); 
                sum -= nums[start++];
            }

            end++;
        }

        return len == INT_MAX ? 0 : len;
    }
};