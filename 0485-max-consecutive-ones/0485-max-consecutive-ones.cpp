class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int count = 0;

        for(int val : nums){
            if(val == 1)
                count++;
            else{
                ans = max(ans, count);
                count = 0;
            }
        }

        return ans > count ? ans : count;
    }
};