class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int start = 0, end = nums.size()-1;
        int ans = 0;
        sort(nums.begin(), nums.end());

        while(start < end){
            if(nums[start]+nums[end] == k){
                ans++;
                start++; end--;
            }
            else if(nums[start]+nums[end] > k){
                end--;
            }else
                start++;
        }

        return ans;

    }
};