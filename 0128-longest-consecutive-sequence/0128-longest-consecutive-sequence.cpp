class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int ans = 1;
        int maxi = INT_MIN;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                continue;
            }
            if(abs(nums[i]-nums[i+1]) == 1)
                ans += 1;
            else{
                maxi = max(ans, maxi);
                ans = 1;
            }
        }

        return ans>maxi ? ans : maxi;
    }
};