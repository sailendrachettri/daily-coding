class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();

        for(int i = 1; i < nums.size(); ){
            if(nums[i] == nums[i-1]){
                nums.erase(nums.begin()+i);
                if(i > 1){
                    i--;
                }
            }else{
                i++;
            }
        }

        return nums.size();
    }
};