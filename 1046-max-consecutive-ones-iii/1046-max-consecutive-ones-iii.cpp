class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0, end = 0;
        int max_len = 0, zeros = 0;

        while(end < nums.size()){
            if(nums[end] == 0)
                zeros++;
            
            while(zeros > k){
                if(nums[start] == 0)
                    zeros--;
                start++;
            }

            max_len = max(max_len, end-start+1);
            end++;
        }

        return max_len;
    }
};