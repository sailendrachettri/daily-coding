class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool is_asc = true;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] > nums[i])
                is_asc = false;
        }

        if(is_asc)
            return true;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] < nums[i])
                return false;
        }

        return true;
    }
};