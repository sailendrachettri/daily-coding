class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";

        int idx = min(word1.size(), word2.size());

        for(int i = 0; i < min(word1.size(), word2.size()); i++){
            ans += word1[i];
            ans += word2[i];
        }
        

        if(word1.size() > word2.size()){
            while(idx < word1.size())
                ans += word1[idx++];
        } else if(word2.size() > word1.size()){
            while(idx < word2.size())
                ans += word2[idx++];
        }

        return ans;
    }
};