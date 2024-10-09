class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();

        if(n == 0) return 0;
        else if(n == 1) return 1;

        int open_c = 0;
        int close_c = 0;

        for(char c : s){
            if(c == '('){
                open_c++;
            } else if(c == ')' && open_c > 0){
                open_c--;
            } else {
                close_c++;
            }
        }

        return open_c + close_c;
    }
};