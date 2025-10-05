class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> arr = nums;
        nums.clear();

        for(int num : arr){
            if(num != val){
                nums.push_back(num);
            }
        }

        return nums.size();
    }
};