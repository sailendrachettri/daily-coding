class Solution {
public:
    string toLowerCase(string s) {
        for(char &ch : s){
            if(ch >= 'A' && ch <= 'Z' && (int)ch <= 97)
                ch = (int)ch + 32;
        }

        return s;
    }
};