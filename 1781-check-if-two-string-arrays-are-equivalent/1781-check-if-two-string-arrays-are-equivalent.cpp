class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = "";
        string str2 = "";

        for(string wd : word1)
            str1 += wd;
        for(string wd : word2)
            str2 += wd;

        return str1 == str2;
    }
};