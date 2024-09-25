class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        int len = 0;

        while(s[i] == ' '){
            i -= 1;
        }

        while(i >= 0 && s[i] != ' '){
            len += 1; i -= 1;
        }

        return len;
    }
};