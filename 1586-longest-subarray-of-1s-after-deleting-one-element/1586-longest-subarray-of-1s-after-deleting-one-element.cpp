class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count_zero = 0;
        int ans = 0;
        int start = 0, end = 0;

        while(end < nums.size()){
            if(nums[end] == 0)
                count_zero++;
            
            while(count_zero > 1){
                if(nums[start] == 0)
                    count_zero--;
                
                start++;
            }

            ans = max(ans, end-start);

            end++;
        }

        return ans;
    }
};