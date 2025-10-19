class Solution {
public:
    bool canJump(vector<int>& nums) {
        int curr_dest = nums.size()-1;

        for(int i = nums.size()-2; i >= 0; i--){
            if(i + nums[i] >= curr_dest){
                curr_dest = i;
            }
        }

        return curr_dest == 0;
    }
};