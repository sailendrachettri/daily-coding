class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;

        sort(begin(nums), end(nums));

        for(int i = 0; i < nums.size(); i++){
            if(ans != nums[i]) return i;
            ans++;
        }

        return ans;
    }
};