class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0, idx  = s.size() - 1;

        while(s[idx] == ' ')
            idx--;

        while(idx >= 0 && s[idx] != ' '){
            idx--;
            len++;
        }

        return len;
    }
};