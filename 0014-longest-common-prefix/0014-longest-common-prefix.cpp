class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int idx = 0;
        int n = strs[0].size();
        string ans = "";

        if(strs[0] == "") return "";

        while(n--){
            char ch = strs[0][idx];

            for(auto st : strs){
                if(st[idx] != ch)
                    return ans;
            }
            idx++;
            ans += ch;
        }

        return ans;
    }
};