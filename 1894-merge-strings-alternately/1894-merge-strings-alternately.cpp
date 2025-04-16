class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int idx = 0;
        string ans = "";

        while(idx < word1.size() && idx < word2.size()){
            ans.push_back(word1[idx]);
            ans.push_back(word2[idx]);
            idx++;
        }

        int idx2 = idx;

        while(idx < word1.size()){
            ans.push_back(word1[idx++]);
        }

        while(idx2 < word2.size()){
            ans.push_back(word2[idx2++]);
        }

        return ans;
    }
};