class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

        if(s.size() <= 1) return true;

        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);

            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
                ans += s[i];
        }

        int start = 0;
        int end = ans.size() - 1;

        while(start <= end){
            cout << ans[start] << "=" << ans[end] << endl;
            if(ans[start++] != ans[end--]) return false;
        }

        cout <<"ans: " << ans;

        return true;

    }
};