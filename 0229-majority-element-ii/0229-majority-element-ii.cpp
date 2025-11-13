class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mp;
        vector<int> ans;

        for(int val : nums){
            mp[val]++;
        }

        for(auto it : mp){
            if(it.second > nums.size()/3)
                ans.push_back(it.first);
        }

        return ans;

    }
};