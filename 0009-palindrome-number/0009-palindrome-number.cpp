class Solution {
public:
    bool isPalindrome(int x) {
        long long val = x;
        long long rev = 0;

        if(x < 0) return false;

        while(val){
            rev = rev * 10 + (val%10);
            val = val/10;
        }

        return rev == x;
    }
};