class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long rev = 0;
        int x_copy = x;

        while(x_copy){
            rev = rev * 10 + (x_copy%10);
            x_copy /= 10;
        }

        return rev == x;
    }
};