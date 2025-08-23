class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int, int> mp;
        vector<int> ans;

        for(int i = 1; i <= nums.size(); i++){
            mp[i] = 0;
        }

        for(int val : nums){
            mp[val]++;
        }

        for(auto it : mp){
            if(it.second == 0)
                ans.push_back(it.first);
        }

        return ans;

    }
};