class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        int size = nums.size();
        sort(nums.begin(), nums.end());

        int firstNum = nums[size-1];
        int secondNum = nums[size-2];

        int thirdNum = nums[1];
        int fourthNum = nums[0];

        int diff = (firstNum * secondNum) - (thirdNum*fourthNum);

        return diff;
    }
};