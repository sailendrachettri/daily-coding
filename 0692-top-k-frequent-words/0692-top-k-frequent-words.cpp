class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_multiset<string> unique;
        for (string word : words)
            unique.insert(word);
        
        // Ordering largest cnt first, and then alphabetically
        vector<pair<int, string>> freq;
        for(auto it = unique.begin(); it != unique.end(); ){
            int cnt = unique.count(*it);
            freq.push_back({-cnt, *it});
            advance(it, cnt);
        }
        sort(freq.begin(), freq.end());
        
        vector<string> ans(k);
        for (int i = 0; i < k; i++)
            ans[i] = freq[i].second;
        
        return ans;
    }
};