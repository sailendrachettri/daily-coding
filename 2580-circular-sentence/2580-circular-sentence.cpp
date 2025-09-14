class Solution {
public:
    bool isCircularSentence(string s) {
        if(s.size() == 1){
            return true;
        }

        int start = 0;
        int one_word = true;

        while(start < s.size()){

            if(s[start] == ' '){
                one_word = false;
                if(s[start-1] != s[start+1])
                    return false;
            }

            start++;
        }

        if(s[0] != s[s.size()-1]){
            return false;
        }

        return true;
    }
};