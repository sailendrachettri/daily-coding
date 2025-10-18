class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr = nums;

        for(int i = 0; i < arr.size(); i++){
            nums[(i+k)%nums.size()] = arr[i];
        }
    }
};