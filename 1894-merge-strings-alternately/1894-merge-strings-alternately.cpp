class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int start = 0;
        string ans = "";

        while(start < word1.size() && start < word2.size()){
            ans += word1[start];
            ans += word2[start++];
        }

        while(start < word1.size()){
            ans += word1[start++];
        }

        while(start < word2.size()){
            ans += word2[start++];
        }

        return ans;
    }
};