class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() / 2;

        int count = 0;

        // sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    count += 1;
                }

                if(count > n){
                    return nums[i];
                }
            }
            count = 0;
        }

        return count;
        
    }
};