class Solution {
public:
    bool isSubsequence(string s, string t) {
        string ans = "";
        int idx = 0;

        for(char ch : t){
            if(ch == s[idx]){
                ans += ch;
                idx++;
            }
        }

        return ans == s;
    }
};