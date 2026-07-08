class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre1(nums.size(), 1), pre2(nums.size(), 1);
        vector<int> ans(nums.size(), 1);

        for(int i = 1; i < pre1.size(); i++){
            pre1[i] = nums[i-1] * pre1[i-1];
        }

        // for(int val : pre1) cout << val << " ";

        for(int i = pre2.size()-2; i >= 0; i--){
            pre2[i] = nums[i+1] * pre2[i+1];
        }
        
        // cout << endl;
        // for(int val : pre2) cout << val << " ";

        for(int i = 0; i < pre1.size(); i++){
            ans[i] = pre1[i] * pre2[i];
        }

        return ans;
    }
};   