class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<pair<int, int>> pairs;
        vector<int> ans;

        for(int val : nums){
            freq[val]++;
        }

        for(auto it : freq){
            pairs.push_back({it.first, it.second});
        }

        sort(pairs.begin(), pairs.end(), [](auto &left, auto &right){
            return left.second > right.second;
        });

        auto it = pairs.begin();
        for(int i = 1; i <= k; i++){
            ans.push_back(it->first);
            it++;
        }

        return ans;
    }
};