class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int val : nums){
            auto it = mp.find(val);

            if(it != mp.end()) return true;
            mp[val]++;
        }

        return false;
    }
};