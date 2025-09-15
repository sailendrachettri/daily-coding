class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans = INT_MIN;
        int sum = 0;

        nums.push_back(0);

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]){
                sum += nums[i-1];
            }else{
                sum += nums[i-1];
                ans = max(ans, sum);
                sum = 0;
            }
        }

        return ans;
    }
};