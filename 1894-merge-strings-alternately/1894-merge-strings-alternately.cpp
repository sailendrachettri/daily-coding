class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int idx = 0;
        string ans = "";

        while(idx < word1.size() && idx < word2.size()){
            ans += word1[idx];
            ans += word2[idx++];
        }

        while(idx < word1.size()){
            ans += word1[idx++];
        }

        while(idx < word2.size()){
            ans += word2[idx++];
        }

        return ans;
    }
};