class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int idx = 0;

        for(int i = 0; i < strs[0].size(); i++){
            char ch = strs[0][idx];

            for(string st : strs){
                if(st[idx] != ch) return ans;
            }

            ans += ch;
            idx++;
        }

        return ans;
    }
};