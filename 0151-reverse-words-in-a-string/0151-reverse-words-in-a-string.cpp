class Solution {
public:
    string reverseWords(string s) {
        int start = 0, end = s.size()-1;
        string ans = "";

        while(start < end){
            swap(s[start++], s[end--]);
        }

        cout << s << endl;

        start = 0;

        while(start < s.size()){
            string temp = "";

            while(start < s.size() && s[start] == ' ')
                start++;

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