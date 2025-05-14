class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;

        if(x < 0)
            return false;
        
        long long rev = 0;

        while(temp){
            rev = rev * 10 + (temp%10);
            temp = temp / 10;
        }

        return rev == x;
    }
};