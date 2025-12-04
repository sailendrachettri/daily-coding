class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        int size = nums.size();

        while(!nums.empty() && nums[nums.size()-1] < k){
            sort(nums.begin(), nums.end(), greater<int>());
            nums.pop_back();
        }

        return size-nums.size();
    }
};