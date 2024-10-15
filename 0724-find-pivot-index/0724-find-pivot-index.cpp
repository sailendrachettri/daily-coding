class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();

        for(int i = 0; i < size; i++){
            int prefixSum = 0;
            int suffixSum = 0;

            for(int j = 0; j < i; j++){
                prefixSum += nums[j];
            }

            for(int k = i+1; k < size; k++){
                suffixSum += nums[k];
            }

            if(prefixSum == suffixSum) return i;
        }

        return -1;
    }
};