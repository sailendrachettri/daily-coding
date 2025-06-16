class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while(start <= end){
            while(start < s.size()-1 && !isalnum(s[start]))
                start++;
            while(end > 0 && !isalnum(s[end]))
                end--;
            
            cout << char(tolower(s[start])) << " " << char(tolower(s[end])) << endl;
            if(start > end)
                return true;

            if(char(tolower(s[start])) != char(tolower(s[end]))){

                return false;
            }

            start++; end--;
        }

        return true;
    }
};