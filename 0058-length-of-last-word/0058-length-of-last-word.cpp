class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size() == 1) return 1;

        int end = s.size()-1;
        int count = 0;

        while(end >= 0){
            while(end >= 0 && s[end] == ' ')
                end--;
            
            while(end >= 0 && s[end] != ' '){
                end--;
                count++;
            }

            if(end <= 0 || s[end] == ' ')
                return count;
        }

        return count;
    }
};