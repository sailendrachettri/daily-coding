class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";

        for(int i = 0; i < s.size(); i++){
            if(ans.size() >= 2 && ans.back() == s[i] && ans[ans.size()-2] == s[i])
                continue;
            else
                ans += s[i];
        }

        return ans;
    }
};