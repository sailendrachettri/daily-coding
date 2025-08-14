class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string> ans;
        string str = "";

        for(int i = 2; i < num.size(); i++){
            if(num[i-2] == num[i-1] && num[i-1] == num[i]){
                str += num[i];
                str += num[i];
                str += num[i];

                ans.push_back(str);
                str = "";
            }
        }

        for(string val : ans){
            str = max(str, val);
        }

        return str;
    }
};