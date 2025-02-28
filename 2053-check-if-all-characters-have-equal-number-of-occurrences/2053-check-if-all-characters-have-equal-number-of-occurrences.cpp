class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<int, int> freq;

        for(char ch : s){
            freq[ch]++;
        }

        auto it = freq.begin();
        int total = it->second;

        for(auto it : freq){
            if(it.second != total) return false;
        }

        return true;
    }
};