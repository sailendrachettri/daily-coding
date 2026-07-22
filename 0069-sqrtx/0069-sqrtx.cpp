class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;

        int ans = INT_MIN;

        if(x == 1) return x;

        while(start <= end){
            long long mid = midpoint(start, end);

            cout << "mid: " << mid << endl << "sq: " << (mid*mid*1LL) << endl;

            if(mid*mid*1LL <= x){
                if(mid > ans) ans = mid;
                start = mid+1;
            }
            else if(mid*mid*1LL > x) end = mid-1;
            else start = mid+1;
        }

        return ans;
    }
};