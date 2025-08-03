class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string, vector<string>> ans;

        map<char, int> freq;
        string temp = "";


        for(string s : strs){
            for(char ch : s){
                freq[ch]++;
            }

            for(auto it : freq){
                temp += it.first;
                temp += to_string(it.second);
            }

            ans[temp].push_back(s);
            temp = "";
            freq.clear();

        }

        for(auto it : ans){
            vector<string> t;
            for(string s : it.second){
                t.push_back(s);
            }

            res.push_back(t);

            t.clear();
        }

        return res;
    }
};