class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i = 0; i < strs[0].size(); i++){
            for (string st : strs){
                if(i == st.size() || st[i] != strs[0][i]){
                    return ans;
                }
            }

            ans += strs[0][i];
        }

        return ans;
    }
};