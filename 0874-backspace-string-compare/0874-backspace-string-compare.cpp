class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s_ans = "";
        string t_ans = "";

        for(int i = 0; i < s.size(); i++){

            if( s[i] != '#')
                s_ans.push_back(s[i]);

            if(s_ans.size() != 0 && s[i] == '#')
                s_ans.pop_back();
        }

        cout << s_ans << endl;

        for(int i = 0; i < t.size(); i++){

            if(t[i] != '#')
                t_ans.push_back(t[i]);

            if(t_ans.size() != 0 && t[i] == '#')
                t_ans.pop_back();
        }

        cout << t_ans << endl;

        return s_ans == t_ans;
    }
};