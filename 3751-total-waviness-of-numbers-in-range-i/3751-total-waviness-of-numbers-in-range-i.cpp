class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;

        for(int i = num1; i <= num2; i++){
            string nums = to_string(i);

            if(nums.size() >= 3){
                for(int j = 1; j < nums.size()-1; j++){
                    if(nums[j-1] < nums[j] && nums[j+1] < nums[j]) ans++;
                    if(nums[j-1] > nums[j] && nums[j+1] > nums[j]) ans++;
                }
            }
        }

        return ans;
    }
};