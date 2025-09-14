class Solution {
public:
    bool isCircularSentence(string s) {
       
        int start = 0;

        while(start < s.size()){

            if(s[start] == ' '){
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