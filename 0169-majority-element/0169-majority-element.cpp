class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() / 2;

        // if(nums.size() == 1) return nums[0];

        int count = 1;
        int ans = nums[0];

        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                count += 1;
            } else{
                count = 1;
                ans = nums[i];
            }

            if(count > n) return nums[i];            
        }      

        return ans;
        
    }
};