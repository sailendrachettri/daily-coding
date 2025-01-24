class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[idx] == val){
                nums.erase(nums.begin()+idx);
                i--;
                continue;
            }
            idx++;
        }

        return nums.size();
    }
};