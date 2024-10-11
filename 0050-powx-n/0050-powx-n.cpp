class Solution {
public:
    double myPow(double x, int n) {
        long binForm = n;
        double ans = 1;

        if(x == 0) return 0.0;
        else if(n == 0) return 1.0;
        else if(x == -1 && n %2 == 0) return 1.0;
        else if(x == -1 && n%2 == 1) return -1.0;


        if(binForm < 0){
            x = 1/x;
            binForm = -binForm;
        }

        while(binForm > 0){
            if(binForm % 2 == 1){
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }

        return ans;
    }
};