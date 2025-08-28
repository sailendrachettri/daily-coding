class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size() == 1) return true;
        bool is_inc = false;
        int i = 0;

        while(i < nums.size() && nums[0] == nums[i]){
            i++;
        }

        if(i < nums.size() && nums[0] < nums[i])
            is_inc = true;
        
        if(is_inc){
            for(int i = 0; i < nums.size()-1; i++){
                if(nums[i] > nums[i+1])
                    return false;
            }
            return true;
        }else{
            for(int i = 0; i < nums.size()-1; i++){
                if(nums[i] < nums[i+1])
                    return false;
            }
            return true;
        }

        return true;


        // Handle case when all the elements are equal

    }
};