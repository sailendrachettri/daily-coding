class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        nums.push_back(-1);

        for(int i = nums.size()-2; i >= 0; i--){
            nums[i] = max(nums[i], nums[i+1]);
        }

        for(int i = 0; i < nums.size()-1; i++){
            nums[i] = nums[i+1];
        }

        nums.pop_back();

        return nums;
    }
};