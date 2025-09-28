class Solution {
public:
    string reverseWords(string s) {
        int end = s.size()-1;
        string temp = "";
        string ans = "";

        while(end >= 0){
            while(end >= 0 && s[end] == ' ')
                end--;
            
            while(end >= 0 && s[end] != ' '){
                temp += s[end--];
            }

            reverse(temp.begin(), temp.end());

            ans += temp;
            ans += ' ';
            temp  = "";
        }

        while(ans[ans.size()-1] == ' ')
            ans.pop_back();

        return ans;
    }
};