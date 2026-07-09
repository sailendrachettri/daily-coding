class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        string rev = "";

        for(char ch : s){
            ch = tolower(ch);

            if(isalnum(ch))
                ans += ch;
        }

        rev = ans;

        reverse(rev.begin(), rev.end());

        return ans == rev;
    }
};