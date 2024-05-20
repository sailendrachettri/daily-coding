class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int topfreq = 0;

        for(int x : nums){
            mp[x]++;
            topfreq = max(topfreq, mp[x]);
        }

        vector<int> ans;
        unordered_map<int, vector<int>> freqmap;
        for(auto it: mp){
            freqmap[it.second].push_back(it.first);
        }

        int count = 0;

        while(count < k){
            if(freqmap.find(topfreq) != freqmap.end()){
                vector<int> v = freqmap[topfreq];
                int n = v.size();

                for(int i = 0;i  < n; i++){
                    ans.push_back(v[i]);
                    count++;

                    if(count == k) break;
                }
            }
            topfreq--;
        }

        return ans;
    }
};