class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0, ones = 0, twos = 0;

        for(int val : nums){
            if(val == 0) zeros++;
            else if(val == 1) ones++;
            else twos++;
        }

        nums.clear();

        for(int i = 1; i <= zeros; i++){
            nums.push_back(0);
        }
        for(int i = 1; i <= ones; i++){
            nums.push_back(1);
        }
        for(int i = 1; i <= twos; i++){
            nums.push_back(2);
        }
    }
};