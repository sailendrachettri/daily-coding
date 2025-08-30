class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        
        long long rev = 0;
        int x2 = x;

        while(x2){
            rev = rev * 10 + (x2%10);
            x2 = x2 / 10;
        }

        return x == rev;
    }
};