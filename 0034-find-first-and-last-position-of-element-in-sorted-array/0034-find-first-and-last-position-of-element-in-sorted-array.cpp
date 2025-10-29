class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        int idx1 = -1, idx2 = -1;

        while(left < nums.size()){
            if(idx1 == -1 && nums[left] == target){
                idx1 = left;
            }

            if(idx2 == -1 && nums[right] == target){
                idx2 = right;
            }

            left++; right--;
        }

        return {idx1, idx2};
    }
};