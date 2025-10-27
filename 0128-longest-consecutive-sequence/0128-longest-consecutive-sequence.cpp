class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        int count = 1, ans = 0;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i]){
                continue;
            }
            if(nums[i-1] != nums[i]-1){
                ans = max(ans, count);
                count = 1;

            }else{
                count++;
            }
        }

        return max(ans, count);
    }
};