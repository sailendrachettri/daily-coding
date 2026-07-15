class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum = 0, evenSum = 0;
        int idx1 = 1;
        int idx2 = 2;

        while(n--){
            oddSum += idx1;
            idx1 += 2;

            evenSum += idx2;
            idx2 += 2;
        }

        return __gcd(oddSum, evenSum);
    }
};