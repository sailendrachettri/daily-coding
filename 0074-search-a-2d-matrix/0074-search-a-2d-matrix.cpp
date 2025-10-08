class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        for(vector<int> nums : m){
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] == target) return true;
            }
        }

        return false;
    }
};