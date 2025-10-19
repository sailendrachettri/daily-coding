class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int end = s.size()-1;

        while(end < s.size()){
            while(end < s.size() && s[end] == ' ')
                end--;
            
            while(end < s.size() && s[end] != ' '){
                len++;
                end--;
            }

            return len;
        }

        return len;
    }
};