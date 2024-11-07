class Solution {
public:
    bool isPalindrome(string s) {
        string pure_str = "";
        string prev_str;

        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);

            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                pure_str += s[i];
        }

        prev_str = pure_str;
        reverse(pure_str.begin(), pure_str.end());

        return prev_str == pure_str;
    }
};