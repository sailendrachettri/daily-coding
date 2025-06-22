class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        string temp = "";

        for(int i = 0; i < s.size(); ){
            for(int j = 0; j < k && i < s.size(); j++){
                temp += s[i++];
            }
            ans.push_back(temp);
            temp = "";
        }

        for(string &str : ans){
            if(str.size() < k){
                while(str.size() < k){
                    str += fill;
                }
            }
        }

        return ans;
    }
};