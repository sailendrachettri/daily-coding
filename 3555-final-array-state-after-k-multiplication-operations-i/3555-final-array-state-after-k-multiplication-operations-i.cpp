class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        int n = nums.size();

        while(k--){
            
            int idx = 0;
            int mini = nums[0];

            for(int j = 0; j < n; j++){
                if(mini > nums[j]){
                    mini = nums[j];
                    idx = j;
                }
            }
            nums[idx] = m * mini;
            
        }

        return nums;
    }
};