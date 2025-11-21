class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;

        for(char ch : word){
            char c = tolower(ch);

            if(ch != c) count++;
        }

        if(count == 1){
            char ch = tolower(word[0]);

            if(word[0] == ch) return false;

            return true;
        }

        if(count == 0 || count == 1 || count == word.size()) return true;

        return false;
    }
};