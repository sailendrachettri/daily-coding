class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, right = s.size()-1;

        while(start < right){
            while(start < s.size() && !isalnum(s[start]))
                start++;
            
            while(right >= 0 && !isalnum(s[right]))
                right--;

            if(start >= right) return true;

            char chleft = s[start++];
            chleft = tolower(chleft);

            char chright = s[right--];
            chright = tolower(chright);

            if(chleft != chright) return false;
            
        }

        return true;
    }
};