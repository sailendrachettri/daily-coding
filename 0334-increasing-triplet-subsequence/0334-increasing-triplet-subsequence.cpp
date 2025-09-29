class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;

        for(int val : nums){
            if(val <= first)
                first = val;
            else if(val <= second)
                second = val;
            
            else return true;
        }

        return false;
    }
};