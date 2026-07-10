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
        
        while(start < end){
            if(s[start] != s[end]) 
                return isValid(start+1, end, s) || isValid(start, end-1, s);
            
            start++; end--;
        }

        return true;
    }
};