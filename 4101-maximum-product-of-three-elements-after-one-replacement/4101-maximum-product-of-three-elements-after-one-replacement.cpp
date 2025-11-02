class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        for(int &val : nums){
            val = abs(val);
        }

        sort(nums.begin(), nums.end());

        return (long long) nums[nums.size()-1] * nums[nums.size()-2]*100000;
    }
};