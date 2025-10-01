class Solution {
public:
    string removeStars(string s) {
        string ans = "";

        for(char ch : s){
            if(ch == '*'){
                if(ans.size() > 0)
                    ans.pop_back();
            }else if(ch != '*')
                ans += ch;
        }

        return ans;
    }
};