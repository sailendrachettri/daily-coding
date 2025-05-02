class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(int &num : nums){
            if(num%2 == 0)
                num = 0;
            else
                num = 1;
        }

        sort(begin(nums), end(nums));

        return nums;
    }
};