class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int start = 0, end = 0;
        int size = 0, zero = 0;

        while(end < nums.size()){
            if(nums[end] == 0)
                zero++;
            
            while(zero >= 1){
                if(nums[start] == 0)
                    zero--;
                start++;
            }

            size = max(size, (end-start)+1);
            end++;
        }

        return size;
    }
};