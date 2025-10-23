class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size() > 2){
            string st = "";

            for(int i = 0; i < s.size()-1; i++){
                st += (s[i] - '0' + s[i+1] - '0') %10;;
            }

            s = st;

            if(s.size() == 2){
                if(s[0] != s[1]) return false;
                else if(s[0] == s[1]) return true;
            }
        }  

        return false;
    }
};