class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int start = 0, end = nums.size()-1;

        while(start < nums.size()){
            if(nums[end] == target && ans[1] == -1)
                ans[1] = end;

            if(nums[start] == target && ans[0] == -1)
                ans[0] = start;
            

            start++; end--;
        }

        return ans;
    }
};