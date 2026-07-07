class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> ans;

        for(int & val : nums){
            mp[val]++;
        }

        vector<pair<int, int>> p(mp.begin(), mp.end());

        sort(p.begin(), p.end(), [](const pair<int, int> & a, const pair<int, int> & b){
            return a.second > b.second;
        });

        // for(auto it : p) cout << it.first << " " << it.second << endl;


        auto it = p.begin();
        for(int i = 0; i < k; i++){

            ans.push_back(it->first);
            it++;
        }

        return ans;

    }
};