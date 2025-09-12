class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int ans = 0;
        bool odd_present = false;

        for(char ch : s)
            mp[ch]++;

        for(auto it : mp){
            if(it.second%2 == 0)
                ans+= it.second;
            else{
                ans += it.second - 1;
                odd_present = true;
            }
        }

        return  odd_present ? ans + 1 : ans;
    }
};