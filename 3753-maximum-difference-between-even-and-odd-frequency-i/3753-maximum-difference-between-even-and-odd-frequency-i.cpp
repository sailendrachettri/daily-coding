class Solution {
public:
    int maxDifference(string s) {
        map<char, int> freq;
        int odd = INT_MIN, even = INT_MAX;

        for(char ch : s){
            freq[ch]++;
        }

        for(auto it : freq){
            if(it.second%2 == 0){
                even = min(even, it.second);
            }else{
                odd = max(odd, it.second);
            }
        }

        return odd - even;
    }
};