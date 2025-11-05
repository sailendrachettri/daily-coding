class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();

        if(n == 0) return ans;
        int left = 0;

        while(left < n){
            int right = left;

            while(right+1 < n && nums[right]+1 == nums[right+1]){
                right++;
            }

            if(left == right){
                ans.push_back(to_string(nums[left]));
            }else{
                ans.push_back(to_string(nums[left])+"->"+to_string(nums[right]));
            }

            left = right + 1;
        }

        return ans;
    }
};