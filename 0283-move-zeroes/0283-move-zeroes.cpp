class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;

        for(int i = 0; i < nums.size(); ){
            if(nums[i]== 0){
                nums.erase(nums.begin()+i);
                if(i > 0){
                    i--;
                }
                count++;
            }else{
                i++;
            }
        }

        // add 0
        for(int i = 1; i <= count; i++){
            nums.push_back(0);
        }
    }
};