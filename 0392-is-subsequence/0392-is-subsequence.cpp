class Solution {
public:
    bool isSubsequence(string s, string t) {
        string st = "";

        int idx = 0;

        for(int i = 0; i < t.size(); i++){
            if(t[i] == s[idx]){
                st += s[idx++];
            }
        }

        return st == s;
    }
};