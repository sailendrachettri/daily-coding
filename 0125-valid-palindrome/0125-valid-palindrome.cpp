class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;

       
        
        while(start < end){
             while(start < s.size() && !isalnum(s[start]) )
                start++;
            while( end >= 0 && !isalnum(s[end]))
                end--;

            if(start > end) return true;

            char ch1 = tolower(s[start]);
            char ch2 = tolower(s[end]);


            if(ch1 != ch2){
                return false;
            }

            start++; end--;
        }

        return true;
    }
};