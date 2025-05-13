class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        
        for(int &val : nums)
            if(val == 0)
                val = 0;
            else if(val < 0)
                val = -1;
            else
                val = 1;
        for(int &val : nums)
            ans *= val;
        
        return ans;
    }
};