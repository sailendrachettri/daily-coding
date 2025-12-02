class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int val = x;

        while(val){
            sum += (val%10);
            val = val / 10;
        }

        return x%sum == 0 ? sum : -1;
    }
};