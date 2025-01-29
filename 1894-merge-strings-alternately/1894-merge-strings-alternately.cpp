class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int start = 0;
        int end = word1.size() > word2.size() ? word2.size() - 1 : word1.size() - 1;
        string ans = "";

        while(start <= end){
            ans += word1[start];
            ans += word2[start];
            start++;
        }

        int start_copy = start;

        while(start < word1.size()){
            ans += word1[start++];
        }

        while(start_copy < word2.size()){
            ans += word2[start_copy++];
        }

        return ans;
    }
};