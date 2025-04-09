class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int size = s.size()-1;

        while(size >= 0 && s[size] == ' '){
            size--;
        }

        while(size >= 0 && s[size] != ' '){
            size--;
            len++;
        }

        return len;

    }
};