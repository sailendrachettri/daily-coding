class Solution {
public:
    bool isCircularSentence(string s) {
        int size = s.size();
        if(size == 1) return true;

        for(int i = 1; i < size-1; i++){
            if(s[i] == ' '){
                if(s[i-1] != s[i+1]) return false;
            }
        }

        if(s[0] == s[size-1]) return true;
        else return false;

        return true;


    }
};