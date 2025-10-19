class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        string ans = "";

        int start = 0;

        while(start < s.size()){
            while(start < s.size() && s[start] == ' ')
                start++;
            
            string temp = "";

            while(start < s.size() && s[start] != ' ')
                temp += s[start++];
            
            reverse(temp.begin(), temp.end());

            ans += temp;
            ans += ' ';
            start++;
        }

        while(ans[ans.size()-1] == ' ')
            ans.pop_back();

        return ans;
    }
};