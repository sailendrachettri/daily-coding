class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());

        vector<int> ans;
        unordered_map<int, int> mp;

        for(int i = mini; i <= maxi; i++)
            mp[i] = 0;

        for(int val : nums) mp[val]++;

        for(auto it :  mp){
            if(it.second == 0) ans.push_back(it.first);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};