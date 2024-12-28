class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int idx = 0;
        int n = strs[0].size();
        string ans = "";

        while(n--){
            char ch = strs[0][idx];

            for(const string &st : strs){
                if(st[idx] != ch)
                    return ans;
            }
            ans += ch;
            idx++;
        }

        return ans;
    }
};