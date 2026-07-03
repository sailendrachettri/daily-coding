class Solution {
public:
    int appendCharacters(string s, string t) {
        int ans = 0;
        int idx = 0;

        for(int i = 0; i < s.size(); i++){
            if(t[idx] == s[i]){
                ans ++;
                idx++;
            }
        }

        // cout << ans <<endl;

        return t.size() - ans;
    }
};