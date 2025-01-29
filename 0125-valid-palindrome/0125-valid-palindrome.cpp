class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

        for(char &ch : s){
            if(isalnum(ch)){
                ch = tolower(ch);
                ans += ch;
            }
        }

        string ans_copy = ans;

        reverse(ans.begin(), ans.end());

        return ans == ans_copy;

    }
};