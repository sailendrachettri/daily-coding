class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = -1;
        int ed = -1;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] == target){
                st = i;
                break;
            }
        }

        for(int i = n-1; i >= 0; i--){
            if(nums[i] == target){
                ed = i;
                break;
            }
        }

        return {st, ed};
        
    }
};