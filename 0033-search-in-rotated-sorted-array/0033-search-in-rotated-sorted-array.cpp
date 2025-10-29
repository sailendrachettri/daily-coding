class Solution {
public:
    int search(vector<int>& nums, int target) {
        int idx = 0;
        for(int val : nums){
            if(val == target) return idx;

            idx++;
        }

        return -1;
    }
};