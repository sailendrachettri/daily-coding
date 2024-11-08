class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;

        for(int i = 0; i < size; i++){
            for(int j = i+1; j < size; j++){
                if(nums[i] == nums[j])
                    nums[i] = INT_MIN;
            }
        }

        for(int i = 0; i < size; i++){
            if(nums[i] != INT_MIN)
                ans.push_back(nums[i]);
        }

        nums.clear();

        for(int i = 0; i < ans.size(); i++){
            nums.push_back(ans[i]);
        }

        return nums.size();
    }
};