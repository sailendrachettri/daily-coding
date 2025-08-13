class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Ways
        /*
            1. Two for loop
            2. hashmap
            3. Sorting
        */

        int slow = nums[0], fast = nums[0];
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];


            if(slow == fast)
                break;
        }

        int slow2 = nums[0];

        while(slow != slow2){
            slow = nums[slow];
            slow2 = nums[slow2];
        }

        return slow;
    }
};