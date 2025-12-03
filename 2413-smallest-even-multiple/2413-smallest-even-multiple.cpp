class Solution {
public:
    int smallestEvenMultiple(int n) {
        int val = 1;

        while(val++){
            if(val%2 == 0 && val%n == 0) return val;
        }

        return -1;
    }
};