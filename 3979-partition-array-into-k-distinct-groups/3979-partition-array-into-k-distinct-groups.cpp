class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        if(nums.size()%k != 0) return false;

        for(int val : nums)
            freq[val]++;
        
        int x = nums.size()/k;
        for(auto it : freq){
            if(it.second > x)
                return false;
        }

        return true;
    }
};