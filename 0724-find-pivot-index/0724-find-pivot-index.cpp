class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = 0;

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                left += nums[j];
            }

            for(int j = i+1; j < nums.size(); j++){
                right += nums[j];
            }

            if(left == right)
                return i;
            
            left = 0;
            right = 0;
        }       

        return -1;
    }
};