class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        for(int val : nums){
            if(val > mini && val < maxi) return val;
        }

        return -1;
    }
};