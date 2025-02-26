class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        int ans = 0;
        int odd_present = false;

        for(char ch : s){
            mp[ch]++;
        }

        for(auto it : mp){
            if(it.second&1){
                ans += (it.second-1);
                odd_present = true;
            }
            else
                ans += it.second;
        }

        return odd_present ? ans + 1 : ans;


    }
};