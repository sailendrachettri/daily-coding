class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s_ans = "";
        string t_ans = "";

        for(char ch : s){
            if(s_ans.size() > 0 && ch == '#')
                s_ans.pop_back();
            else if(ch != '#')
                s_ans.push_back(ch);
        }

        for(char ch : t){
            if(t_ans.size() > 0 && ch == '#')
                t_ans.pop_back();
            else if(ch != '#')
                t_ans.push_back(ch);
        }

        return s_ans == t_ans;
    }
};