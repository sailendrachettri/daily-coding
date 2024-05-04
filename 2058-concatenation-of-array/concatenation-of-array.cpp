class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int idx;

        vector<int> ans(nums.size()*2);

        for(int i = 0; i < nums.size(); i++){
            ans[i] = nums[i];
        }

        idx = nums.size();
        for(int i = 0; i < nums.size(); i++){
            ans[idx++] = nums[i];
        }

        return ans;
    }
};