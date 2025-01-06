class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx = s.size()-1;
        int count = 0;

        if(s.size() == 1) return 1;

        while(s[idx] == ' ')
            idx--;

        while(idx >= 0 && s[idx] != ' '){
            idx--;
            count++;
        }
        
        return count;
    }
};