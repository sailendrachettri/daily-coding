class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(), 1);
        vector<int> suf(nums.size(), 1);

        // prefix
        for(int i = 1; i < nums.size(); i++){
            pre[i] = nums[i-1] * pre[i-1];
        }

        // suffix
        for(int i = nums.size()-2; i > -1; i--){
            suf[i] = nums[i+1] * suf[i+1];
        }

        for(int i = 0; i < pre.size(); i++){
            cout << pre[i] << " ";
        }

        cout << endl;
        for(int i = 0; i < suf.size(); i++){
            cout << suf[i] << " ";
        }



        nums.clear();

        for(int i = 0; i < pre.size(); i++){
            nums.push_back(pre[i]*suf[i]);
        }

        return nums;
    }
};