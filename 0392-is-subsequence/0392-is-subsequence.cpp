class Solution {
public:
    bool isSubsequence(string s, string t) {
        string ans = "";
        int idx = 0;

        for(int i = 0; i < t.size(); i++){
            if(s[idx] == t[i]){
                ans += s[idx++];
            }
        }

        return ans == s;
    }
};