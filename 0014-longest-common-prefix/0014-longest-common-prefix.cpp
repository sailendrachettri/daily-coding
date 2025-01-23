class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int idx = 0;
        string ans = "";

        for(int i = 0; i < strs[0].size(); i++){
            bool is_same = true;

            for(string st : strs){

                if(st[idx] != strs[0][idx]){
                    is_same = false;
                    return ans;
                }

            }
            if(is_same){
                ans += strs[0][idx++];
            }
        }

        return ans;
    }
};