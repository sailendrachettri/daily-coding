class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int idx = 0;
        for(int i = 0; i < n; i++){
            if(nums[idx] == 0){
                nums.push_back(0);
                nums.erase(nums.begin()+idx);
            } else {
                idx++;
            }
        }
    }
};