class Solution {
public:
    int maxPower(string s) {
        if(s.size() == 1) return s.size();
        int count = 0;
        int ans = 0;

        char ch = s[0];

        for(char c : s){
            if(c == ch)
                count++;
            else{
                ch = c;
                ans = max(ans, count);
                count = 1;
            }
        }

        ans = max(ans, count);

        return ans;
    } 
};