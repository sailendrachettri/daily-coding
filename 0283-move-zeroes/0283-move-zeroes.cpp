class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[idx] == 0){
                nums.push_back(0);
                nums.erase(nums.begin()+idx);
            }else
                idx++;
        }
    }
};