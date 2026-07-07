class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0, ones = 0, twos = 0;
        int idx = 0;

        for(int &val : nums){
            if(val == 0) zeros++;
            else if(val == 1) ones++;
            else twos++;
        }

        while(zeros--){
            nums[idx++] = 0;
        }

        while(ones--){
            nums[idx++] = 1;
        }

        while(twos--){
            nums[idx++] = 2;
        }
    }
};