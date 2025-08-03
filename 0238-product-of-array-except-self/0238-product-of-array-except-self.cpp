class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(), 1);
        vector<int> suffix(nums.size(), 1);

        for(int i = 1; i < nums.size(); i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        for(int val : prefix)
            cout << val << " ";

        cout << endl;
        for(int i = nums.size()-2; i >= 0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        for(int val : suffix)
            cout << val << " ";

        cout << endl << "pringing" << endl;
        nums.clear();

        for(int i = 0; i < prefix.size(); i++){
            nums.push_back(prefix[i] * suffix[i]);
            cout << nums[i] << endl;
        }

        return nums;
    }
};