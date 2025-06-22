class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int end = s.size()-1;
        vector<string> str;
        string ans;

        if(s.size() == 1)
            return s;

        while(start < end){
            while(s[start] == ' ')
                start++;
            string temp = "";

            while(start <= end && s[start] != ' '){
                temp += s[start++];
            }
            reverse(temp.begin(), temp.end());
            cout << temp << " ";
            str.push_back(temp);
        }

        reverse(str.begin(), str.end());

        for(string &st : str){
            reverse(st.begin(), st.end());
            ans += st;
            ans += " ";
        }
        ans.pop_back();

        if(ans[0] == ' '){
            for(int i = 0; i < ans.size()-1; i++){
                ans[i] = ans[i+1];
            }
            ans.pop_back();
        }

        return ans;
    }
};