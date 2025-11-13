class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<pair<int, int>> arr;
        vector<int> ans;

        for(int val : nums){
            mp[val]++;
        }

        for(auto it : mp){
            arr.push_back({it.second, it.first});
        }

        sort(arr.begin(), arr.end(), [](auto &a, auto &b){
            return a.first > b.first;
        });

        for(int i = 0; i < k; i++){
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};