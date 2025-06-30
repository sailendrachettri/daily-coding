class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int t) {
        map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums[0].size(); j++){
                mp[nums[i][j]]++;
            }
        }

        return mp.count(t) > 0 ? true : false;
    }
};