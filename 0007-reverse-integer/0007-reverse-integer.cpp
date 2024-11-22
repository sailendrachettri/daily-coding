class Solution {
public:
    int reverse(int x) {
        long long ans = 0;

        while(x){
            ans = (ans * 10) + (x % 10);
            x = x / 10;
        }

        cout << ans;

        if(ans > INT_MIN && ans < INT_MAX)
            return ans;

        return 0;
    }
};