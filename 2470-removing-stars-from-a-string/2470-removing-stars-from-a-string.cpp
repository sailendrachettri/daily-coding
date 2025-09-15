class Solution {
public:
    string removeStars(string s) {
        string ans = "";

        for(char ch : s){
            if(ch != '*'){
                ans += ch;
            }else if(ch == '*' && ans.size()){
                ans.pop_back();
            }
        }

        return ans;
    }
};