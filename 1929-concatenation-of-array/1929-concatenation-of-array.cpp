class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int idx = nums.size();
        int itr = 0;

        for(int i = 0; i < idx; i++){
            nums.push_back(nums[itr++]);
        }

        return nums;
    }
};