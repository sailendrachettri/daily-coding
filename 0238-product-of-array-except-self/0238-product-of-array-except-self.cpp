class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix_sum(nums.size(), 1);
        vector<int> suffix_sum(nums.size(), 1);

        for(int i = 1; i < nums.size(); i++){
            prefix_sum[i] = prefix_sum[i-1] * nums[i-1];
        }

        for(int i = nums.size()-2; i >= 0; i--){
            suffix_sum[i] = suffix_sum[i+1]*nums[i+1];
        }

        for(int val : prefix_sum){
            cout << val << " ";
        }

        for(int i = 0; i < nums.size(); i++){
            nums[i] = (prefix_sum[i]*suffix_sum[i]);
        }

        return nums;
    }
};