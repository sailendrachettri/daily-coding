class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> freq;
        int idx = 0;

        for(int val : nums){
            auto it = freq.find(target-val);

            if(it != freq.end()){
                if(val + it->first == target && it->second != idx)
                    return {idx, it->second};
            }
            freq[val] = idx++;
        }

        return {-1, -1};
    }
};