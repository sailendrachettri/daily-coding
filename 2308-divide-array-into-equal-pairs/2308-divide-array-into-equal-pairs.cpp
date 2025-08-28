class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int half = nums.size()/2;
        unordered_map<int, int> freq;
        for(int val : nums){
            freq[val]++;
        }
        
        for(auto it : freq){
            if(it.second%2 != 0)
                return false;
        }

        return true;
    }
};