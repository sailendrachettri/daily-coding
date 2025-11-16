class Solution {
public:
    int numSub(string s) {
        int MOD = 1e9 + 7;
        long long ans = 0, count = 0;

        for(char ch : s){
            if(ch == '1'){
                count++;
            }else{
                ans = (ans + count * (count + 1) / 2) % MOD;
                count = 0;
            }
        }

        ans = (ans + count * (count + 1) / 2) % MOD;

        return ans;
    }
};