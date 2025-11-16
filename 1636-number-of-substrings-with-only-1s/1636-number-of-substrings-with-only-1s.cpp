class Solution {
public:
    int numSub(string s) {
        int mod = 1e9+7;
        long long count = 0;
        long long ans = 0;

        for(char ch : s){
            if(ch == '1') count++;
            else{
                ans += (count * (count + 1) / 2) % mod;
                count = 0;
            }
        }

        ans += (count * (count + 1) / 2) % mod;

        return ans;
    }
};