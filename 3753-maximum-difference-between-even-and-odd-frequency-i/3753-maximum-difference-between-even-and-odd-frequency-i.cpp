class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;

        for(char ch : s){
            mp[ch]++;
        }

        int odd_maxi = INT_MIN;
        int even_maxi = INT_MAX;

        for(auto it : mp){
            if(it.second %2 == 0){
                even_maxi = min(even_maxi, it.second);
            }
            if(it.second %2 != 0){
                odd_maxi = max(odd_maxi, it.second);
            }
        }

        return odd_maxi - even_maxi;
        
    }

};