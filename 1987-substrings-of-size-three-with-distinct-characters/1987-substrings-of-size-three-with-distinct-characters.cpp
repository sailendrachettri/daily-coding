class Solution {
public:
    int countGoodSubstrings(string s) {

        if(s.size() <= 2) return 0;

        int ans = 0;

        for(int i = 2; i < s.size(); i++){
            if(s[i-2] != s[i-1] && s[i-2] != s[i] && s[i-1] != s[i])
                ans++;
        }

        return ans;
    }
};