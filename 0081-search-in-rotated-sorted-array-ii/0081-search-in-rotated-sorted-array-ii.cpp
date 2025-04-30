class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int val : nums)
            if(val == target)
                return true;
        
        return false;
    }
};