class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.size()-1;
        int count = 0;

        while(s[end] == ' ')
            end--;

        while(end >= 0 && s[end] != ' '){
            count++;
            end--;
        }

        return count;
    }
};