class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0;
        int ones = 0;
        int twos = 0;

        for(int num : nums){
            if(num == 0) zeros++;
            else if(num == 1) ones++;
            else twos++;
        }

        nums.clear();

        while(zeros--)
            nums.push_back(0);
        while(ones--)
            nums.push_back(1);
        while(twos--)
            nums.push_back(2);
    }
};