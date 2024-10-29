class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return true;

        int direction = 0;

        for(int i = 1; i < n; i++){
            int diff = nums[i] - nums[i-1];

            if(diff > 0){
                if(direction == -1) return false;
                direction = 1;
            }else if(diff < 0){
                if(direction == 1) return false;
                direction = -1;
            }
        } 
    return true;
    }

};