class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int val : nums){
            cout << ans << " ";
            ans ^= val;
        }

        return ans;
    }
};