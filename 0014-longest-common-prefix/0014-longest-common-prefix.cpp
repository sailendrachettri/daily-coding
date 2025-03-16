class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        int idx = 0;
        for(int i = 0; i < strs[0].size(); i++){

            for(string st : strs){
                if(strs[0][i] != st[idx])
                    return ans;
            }
            cout << ans << endl;
            ans += strs[0][idx++];
        }

        return ans;
    }
};