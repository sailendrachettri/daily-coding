class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;

        int i = s.length()-1;

        while(s.at(i) == ' ' && i >= 0){
            i--;
        }

        while(i >= 0 && s.at(i) != ' '){
            count++; i--;
        }

        return count;
    }
};