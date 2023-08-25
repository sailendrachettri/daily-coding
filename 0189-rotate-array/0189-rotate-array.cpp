class Solution {
public:
//https://leetcode.com/problems/rotate-array/submissions/
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> temp(n);

        for(int i = 0; i < n; i++)
        {
            temp[(i+k) % n] = nums[i]; // formula // if we calcualte mode of a numbr then we get a number between 0 to n-1
        }

        nums = temp; // copying the temp array to original array
    }
};