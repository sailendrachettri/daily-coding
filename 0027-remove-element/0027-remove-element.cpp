class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        for(int i = 0; i < nums.size();){
            if(nums[i] == val){
                nums.erase(nums.begin()+i);
            } else
            i++;
        }


        return nums.size();
    }
};