class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int idx = 0;

        for(int val : nums){
            auto it = mp.find(target-val);

            if(it != mp.end()){
                if(it->second != idx && it->first+val == target)
                    return {it->second, idx};
            }

            mp[val] = idx;
            idx++;
        }

        return {-1, -1};
    }
};