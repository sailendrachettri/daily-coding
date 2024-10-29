class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int size = nums.size();
        int good_pairs = 0;

        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if(nums[i] == nums[j] && i < j)
                    good_pairs++;
            }
        }

        return good_pairs;
    }
};