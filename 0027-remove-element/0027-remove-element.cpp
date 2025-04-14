class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;

        for(int num : nums){
            if(num != val)
                ans.push_back(num);
        }

        nums.clear();

        for(int val : ans){
            nums.push_back(val);
        }

        return nums.size();
    }
};