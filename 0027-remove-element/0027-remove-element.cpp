class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> arr;

        for(int num : nums){
            if(num != val){
                arr.push_back(num);
            }
        }

        nums.clear();

        nums = arr;

        return arr.size();
    }
};