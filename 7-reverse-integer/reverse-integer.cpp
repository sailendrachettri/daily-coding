class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        int temp = x;

        while(temp != 0){
            if(rev > INT_MAX/10 || rev < INT_MIN/10) return 0;

            rev = rev * 10 + (temp%10);
            temp = temp / 10;
            
        }

        return rev;
    }
};