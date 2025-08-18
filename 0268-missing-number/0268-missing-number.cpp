class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int idx = 0;

        for(int i = 0; i < nums.size(); i++){
            cout << i << " " << idx << endl;
            if(nums[i] != idx++) return i;
        }

        return idx;
    }
};