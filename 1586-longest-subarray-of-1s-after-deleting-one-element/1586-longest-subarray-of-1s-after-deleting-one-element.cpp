class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_len = 0;
        int zeros = 0;

        int start = 0, end = 0;

        while(end < nums.size()){
            if(nums[end] == 0)
                zeros++;
            
            while(zeros > 1){
                if(nums[start] == 0)
                    zeros--;
                start++;
            }

            max_len = max(max_len, end-start);

            end++;
        }

        return max_len;
    }
};