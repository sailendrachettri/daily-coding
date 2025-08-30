class Solution {
public:
    bool check(string str){
        int start = 0;
        int end = str.size()-1;

        while(start < end){
            if(str[start++] != str[end--])
                return false;
        }

        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string &word : words){
            bool res = check(word);

            if(res) return word;
        }

        return "";
    }
};