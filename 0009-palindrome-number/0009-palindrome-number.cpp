class Solution {
public:
    bool isPalindrome(int x) {
        int x_copy = x;
        long long rev = 0;

        if(x < 0) return false;

        while(x_copy){
            rev = rev * 10 + x_copy%10;
            x_copy /= 10;
        }

        cout << rev;

        return rev == x;
    }
};