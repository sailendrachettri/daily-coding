class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                nums[i-1] *= 2;
                nums[i] = 0;
            }

        }

        int size = nums.size();
        int idx = 0;

        for(int i = 0; i < size; i++){
            if(nums[idx] == 0){
                nums.erase(nums.begin()+idx);
                nums.push_back(0);
            }else idx++;

        }

        return nums;
    }
};