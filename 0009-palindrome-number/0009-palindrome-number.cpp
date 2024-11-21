class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);

        string str_copy = str;

        reverse(str.begin(), str.end());

        return str == str_copy;
    }
};