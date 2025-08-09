class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long ans = 1;
        int itr = 0;

        while(ans <= n){
            ans = pow(2, itr++);
            if(ans == n) return true;
        }

        return false;
    }
};