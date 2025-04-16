class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        string rev;

        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i]))
                ans.push_back(tolower(s[i]));
        }

        rev = ans;

        reverse(begin(rev), end(rev));

        return (ans == rev);
    }
};