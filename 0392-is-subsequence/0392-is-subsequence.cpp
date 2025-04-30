class Solution {
public:
    bool isSubsequence(string s, string t) {
        string ans = "";
        int idx = 0;

       for(int i = 0; i < t.size(); i++){
            if(t[i] == s[idx]){
                ans.push_back(t[i]);
                idx++;
            }
       }

       return ans == s;
    }
};