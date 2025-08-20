class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, cnt = 0;

        for(int val : nums){
            if(val == 1)
                cnt++;
            else{
                ans = max(cnt, ans);
                cnt = 0;
            }
        }

        return ans > cnt ? ans : cnt;
    }
};