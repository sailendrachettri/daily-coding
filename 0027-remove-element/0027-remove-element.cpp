class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;
        for(int i = 0 ; i < nums.size();){
            if(val == nums[i]){
                nums.erase(nums.begin()+i);

                if(i > 0){
                    i--;
                }
            }else{
                i++;
            }
        }

        return nums.size();
    }
};