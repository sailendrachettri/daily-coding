class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> freq;
        int len = 0;

        for(char & ch : s){
            freq[ch]++;
        }

        for(auto it : freq){
            if(it.second % 2 == 0)
                len += 2;
            else
                len += 1;
        }

        return len;
    }
};