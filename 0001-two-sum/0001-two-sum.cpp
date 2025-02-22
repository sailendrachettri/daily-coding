class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        mp.insert(pair<int, int>(nums[0], 0));

        for(int i = 1; i < nums.size(); i++){
            
            auto it = mp.find(target-nums[i]);
            if( it != mp.end()){
                return {it->second, i};
            }else{
                mp.insert(pair<int, int>(nums[i], i));
            }
        }

        return {};
    }
};