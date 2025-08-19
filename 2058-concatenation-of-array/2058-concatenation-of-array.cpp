class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        int idx = 0;

        while(size--){
            nums.push_back(nums[idx++]);
        }

        return nums;
    }
};