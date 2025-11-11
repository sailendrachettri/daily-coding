class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for(string s : strs){
            string copy = s;
            sort(copy.begin(), copy.end());

            mp[copy].push_back(s);
        }

        for(auto m : mp){
            ans.push_back(m.second);
        }

        return ans;
    }
};