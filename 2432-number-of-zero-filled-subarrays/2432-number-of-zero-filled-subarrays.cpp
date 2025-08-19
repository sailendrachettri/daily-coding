class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0, cnt = 0;

        for(int val : nums){
            if(val == 0){
                cnt += 1;
            }else{
                cnt = 0;
            }

            ans += cnt;
        }

        return ans;
    }
};