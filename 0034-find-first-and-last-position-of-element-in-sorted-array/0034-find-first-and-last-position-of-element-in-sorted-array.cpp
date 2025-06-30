class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int idx1 = -1;
        int idx2 = -1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target)
                idx1 = i;
        }

        for(int i = nums.size()-1; i >= 0; i--){
            if(nums[i] == target)
                idx2 = i;
        }

        return {idx2, idx1};
    }
};