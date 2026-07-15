class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum = 0, evenSum = 0;
        int idx = 1;
        int t = n;

        while(t--){
            oddSum += idx;
            idx += 2;
        }

        t = n;
        idx = 2;
        while(t--){
            evenSum += idx;
            idx += 2;
        }

        // cout << oddSum << " " << evenSum << endl;

        return __gcd(oddSum, evenSum);
    }
};