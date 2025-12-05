class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, vector<int>> mp;
        vector<vector<int>> ans;

        for(vector<int> arr : nums1){
            mp[arr[0]].push_back(arr[1]);
        }

        for(vector<int> arr : nums2){
            mp[arr[0]].push_back(arr[1]);
        }

        for(auto it : mp){
            int sum = accumulate(it.second.begin(), it.second.end(), 0);
            ans.push_back({it.first, sum});
        }

        return ans;
    }
};