class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n = s.size();
        int idx = 0;
        string st = "";
        st += s[idx++];

        while(n--){
            string ans = "";

            for(int i = 0; i < s.size() && ans.size() < s.size(); i++){
                ans += st;
            }

            if(st == s) return false;

            if(ans == s) return true;
            st += s[idx++];
        }

        return false;

        
    }
};