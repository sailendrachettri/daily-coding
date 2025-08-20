class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size()-1;
        int len = 0;

        while(size >= 0 && !(isalnum(s[size]))){
            size--;
        }

        while(size >= 0 && isalnum(s[size])){
            len++;
            size--;
        }

        return len;


    }
};