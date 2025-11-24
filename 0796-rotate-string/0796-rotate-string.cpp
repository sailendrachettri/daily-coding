class Solution {
public:
    bool rotateString(string s, string goal) {
        string ans = s;

        int n = s.size();

        while(n--){
            if(ans == goal) return true;
            char ch = ans[0];
            ans.erase(ans.begin());
            ans.push_back(ch);
        }

        return false;
    }
};