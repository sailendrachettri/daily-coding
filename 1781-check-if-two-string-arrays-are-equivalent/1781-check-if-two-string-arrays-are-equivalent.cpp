class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1 = "";
        string ans2 = "";

        for(string val : word1)
            ans1 += val;
        
        for(string val : word2)
            ans2 += val;

        return ans1 == ans2;
    }
};