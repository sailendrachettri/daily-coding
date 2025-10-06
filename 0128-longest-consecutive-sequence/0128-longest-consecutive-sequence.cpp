class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0, count = 1;

        if(nums.size() <= 1) return nums.size();

        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i])
                continue;
            else if(nums[i-1] == (nums[i]-1))
                count++;
            else{
                ans = max(count, ans);
                count = 1;
            }
        }

        return max(count, ans);
    }
};