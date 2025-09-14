class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";

        int start = 0;
        int idx = 0;

        while(start < s.size()){
            if(idx < spaces.size() && spaces[idx] == start){
                ans += " ";
                idx++;
            }
            ans += s[start++];
        }

        return ans;
    }
};