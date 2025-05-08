class Solution {
public:

    bool is_palindrome(string &str){
        string rev = str;
        reverse(rev.begin(), rev.end());

        return str == rev;
    }
    string firstPalindrome(vector<string>& words) {
        for(string word : words){
            if(is_palindrome(word))
                return word;
        }

        return "";
    }
};