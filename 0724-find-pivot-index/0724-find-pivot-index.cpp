class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> pre(nums.size(), 0);
        vector<int> suf(nums.size(), 0);

        for(int i = 1; i < nums.size(); i++){
            pre[i] = pre[i-1] + nums[i-1];
        }

        for(int i = nums.size()-2; i >= 0; i--){
            suf[i] = suf[i+1] + nums[i+1];
        }

        for(int i = 0; i < pre.size(); i++){
            if(suf[i] == pre[i])
                return i;
        }

        return -1;
    }
};