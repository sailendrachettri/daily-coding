class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> freq;

        for(int val : nums)
            freq[val]++;
        
        for(auto it : freq){
            if(it.second > 1)
                return true;
        }

        return false;
    }
};