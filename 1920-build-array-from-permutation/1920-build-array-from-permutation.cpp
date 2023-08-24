class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = 1024;
        int size = nums.size();
        
        for(int i = 0; i < size; i++)
        {
            int a = nums[i];
            int b = nums[nums[i]];
            nums[i] = a+ (b%n) * n;
        }

        for(int i = 0; i < size; i++)
        {
            nums[i] = nums[i]/n;
        }

        return nums;
    }
};