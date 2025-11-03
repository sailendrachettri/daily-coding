class Solution {
public:
    bool isHappy(int n) {
        int times = 1000;

        int val = n;

        while(times--){
            int num = val;
            int total = 0;

            cout << num << " ";

            while(num){
                total += (num%10) * (num%10);
                num = num / 10;
            }

            if(total == 1) return true;

            val = total;
        }

        return false;

    }
};