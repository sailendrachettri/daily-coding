class Solution {
public:
    int arraySign(vector<int>& nums) {
        int prod = 1;

        for(int &val : nums){
            if(val == 0) return 0;
            else{
                if(val > 0){
                    val = 1;
                    prod = val * prod;
                }
                else{
                    val = -1;
                    prod = prod * val;
                }
            }
        }

        return prod;
    }
};