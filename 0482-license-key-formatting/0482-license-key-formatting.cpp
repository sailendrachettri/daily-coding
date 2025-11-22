class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int t = k;
        string ans = "";

        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] != '-'){
                ans += toupper(s[i]);
                t--;
            }

            if(t == 0){
                ans += '-';
                t = k;
            }
        }

        if(!ans.empty() && ans[ans.size()-1] == '-')
            ans.pop_back();
        reverse(ans.begin(), ans.end());


        cout << ans << endl;

        return ans;
    }
};