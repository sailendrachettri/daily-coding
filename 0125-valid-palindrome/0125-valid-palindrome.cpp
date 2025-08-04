class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

        for(char &ch : s){
            ch = tolower(ch);

            if(isalnum(ch)){
                ans += ch;
            }
        }

        string copy_ans = ans;
        reverse(ans.begin(), ans.end());

        return copy_ans == ans;
    }
};