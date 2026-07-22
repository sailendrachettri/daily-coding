class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;

        int ans = 0;

        while(start <= end){
            long long mid = midpoint(start, end);

            if(mid*mid*1LL <= x){
                ans = mid;
                start = mid+1;
            }
           else end = mid-1;
        }

        return ans;
    }
};