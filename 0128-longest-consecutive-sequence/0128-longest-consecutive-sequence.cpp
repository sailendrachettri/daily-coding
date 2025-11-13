class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        int ans = 0;
        int count = 1;

        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i]) continue;

            if(nums[i-1] == nums[i]-1){
                count++;
            }else{
                ans = max(count, ans);
                count = 1;
            }
        }

        return max(count, ans);
    }
};