class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            auto it = mp.find(nums[i]);

            if(it != mp.end()){
                if(nums[i] ==  it->first && abs(i- it->second) <= k)
                    return true;
            }

            mp[nums[i]] = i;
        }

        return false;
    }
};