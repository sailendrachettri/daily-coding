class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        string rev;

        for(char ch : s){
            if(isalnum(ch))
                ans.push_back(tolower(ch));
        }

        rev = ans;

        reverse(rev.begin(), rev.end());

        return (ans == rev);
    }
};