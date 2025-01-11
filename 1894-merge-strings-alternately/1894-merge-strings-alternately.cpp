class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int start = 0;
        int end = word1.size() > word2.size() ? word2.size() : word1.size();

        while(start < end){
            ans+= word1[start];
            ans += word2[start];
            start++;
        }
        int start_copy = start;

        while(start_copy < word1.size())
            ans += word1[start_copy++];
        while(start < word2.size())
            ans += word2[start++];

        return ans;
    }
};