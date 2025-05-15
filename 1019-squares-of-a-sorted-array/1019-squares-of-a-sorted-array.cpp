class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int &val : nums){
            val = val * val;
        }

        sort(begin(nums), end(nums));

        return nums;
    }
};