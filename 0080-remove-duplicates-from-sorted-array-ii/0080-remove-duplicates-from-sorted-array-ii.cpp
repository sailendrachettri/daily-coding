class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i = 2; i < nums.size();){
            if(nums[i-2] == nums[i-1] && nums[i-1] == nums[i]){
                nums.erase(nums.begin()+(i-2));

                if(i > 2)
                    i--;
            }else{
                i++;
            }
        }

        return nums.size();
    }
};