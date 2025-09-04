class Solution {
public:
    int mod = 100000000+7;

    int arraySign(vector<int>& nums) {
        long long prod = 1;

        for(int val : nums){
            prod = prod * val;
            prod = prod%mod;
        }

        if(prod == 0) return 0;
        else if(prod > 0) return 1;
        return -1;
    }
};