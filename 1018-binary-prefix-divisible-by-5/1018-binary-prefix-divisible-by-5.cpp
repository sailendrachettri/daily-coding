class Solution {
public:
    int mod = 1e9 + 7;
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        unsigned long long dec = 0;
        vector<bool> ans;

        for(int val : nums){
            dec = (dec*2) + val;
            if(dec >= 5)
                dec -= 5;

            if(dec%5 == 0) ans.push_back(true);
            else ans.push_back(false);
        }

        return ans;
    }
};