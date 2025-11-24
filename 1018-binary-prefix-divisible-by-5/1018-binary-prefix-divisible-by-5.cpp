class Solution {
public:

    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int dec = 0;
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