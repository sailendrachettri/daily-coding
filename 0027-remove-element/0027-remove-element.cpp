class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;

        for(int i = 0; i < nums.size();){
            if(nums[idx] == val){
                nums.erase(nums.begin()+idx);
            }else {
                i++;
                idx++;
            }
        }

        return nums.size();
    }
};