class Solution {
public:
    long long removeZeros(long long n) {
        long long num = 0;
        long long rev = 0;

        while(n){
            if(n%10 != 0) num = (num* 10 )+ (n%10);
            n = n / 10;
        }

        while(num){
            rev = rev * 10 + (num%10);
            num = num / 10;
        }


        return rev;

    }
};