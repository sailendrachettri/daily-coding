class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, int> mp;
        int i = 0;
        vector<string> ans(names.size());

        for(int val : heights){
            mp[val] = i;
            i++;
        }

        i = 0;
        for(auto it : mp){
            ans[i] = names[it.second];
            i++;
        }

        reverse(ans.begin(), ans.end());

        return ans;

    }
};