class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int size = s.size();
        int start = size - 1;
        
        while(s[start] == ' '){
            start--;
        }

        for(int i = start; i >= 0; i--){
            if(s[i] != ' ')
                len++;

            if(s[i] == ' ') return len;
        }


        return len;

        
    }
};