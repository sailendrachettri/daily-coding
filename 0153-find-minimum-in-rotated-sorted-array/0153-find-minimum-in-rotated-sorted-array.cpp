class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = nums[0];

        for(int val : nums){
            ans = min(ans, val);
        }

        return ans;
    }
};