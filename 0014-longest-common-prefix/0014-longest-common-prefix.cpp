class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int idx = 0;
        string ans = "";

        for(int i = 0; i < strs[0].size(); i++){
            for(string st : strs){
                if(strs[0][i] != st[idx])
                    return ans;
            }

            ans += strs[0][idx++];
        }

        return ans;
    }
};