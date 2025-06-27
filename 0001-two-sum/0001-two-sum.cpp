class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            auto it = mp.find(target- nums[i]);

            if(it != mp.end()){
                if(it->first + nums[i] == target)
                    return {it->second, i};
            }else{
                mp.insert({nums[i],i});
            }
        }

        return {-1, -1};
    }
};