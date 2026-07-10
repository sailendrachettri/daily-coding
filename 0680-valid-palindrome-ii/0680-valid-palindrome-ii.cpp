class Solution {
public:
    bool isValid(int start, int end, string s){
        while(start < end){
            if(s[start++] != s[end--]) return false;
        }

        return true;
    }
    bool validPalindrome(string s) {
        int start = 0, end = s.size()-1;
        bool res;

        while(start < end){
            if(s[start] == s[end]){
                start++; end--;
                res = true;
            }else{

                res = isValid(start+1, end, s);
                if(res) return true;

                res = isValid(start, end-1, s);
                if(res) return true;

                return false;
            } 
        }

        return res;
    }
};