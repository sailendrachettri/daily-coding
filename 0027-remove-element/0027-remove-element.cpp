class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0;
        int end = nums.size() - 1;
        int size = 0;

        while(start < end){
            while(start < nums.size() && nums[start] != val)
                start++;
            while(end >= 0 && nums[end] == val)
                end--;
            
            if(start >= end)
                break;
            swap(nums[start++], nums[end--]);
        }

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                return size;
            }
            size++;
        }

        return size;
    }
};