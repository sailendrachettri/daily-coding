class Solution {
public:
    int addDigits(int num) {
        string str = to_string(num);
        long long ans = 0;
        long long temp = num;

        if(str.size() <= 1)
            return num;

        while(str.size() > 1 && temp != 0){
            ans += temp%10;
            temp = temp/10;

            if(temp == 0){
                str = to_string(ans);
                if(str.size() <= 1)
                    return ans;
                
                temp = ans;
                ans = 0;
            }
        }

        return ans;

        return 0;
    }
};