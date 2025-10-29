class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(vector<int> arr : matrix){
            for(int val : arr){
                if(val == target) return true;
            }
        }

        return false;
    }
};