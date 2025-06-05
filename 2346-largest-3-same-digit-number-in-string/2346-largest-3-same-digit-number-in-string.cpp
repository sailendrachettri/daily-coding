class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string> temp;

        for(int i = 2; i < num.size(); i++){
            if(num[i] == num[i-1] && num[i-1] == num[i-2]){
                string ans = "";
                ans += num[i];
                ans += num[i];
                ans += num[i];

                temp.push_back(ans);
                ans = "";
            }
        }

        if(temp.size() == 0)
            return "";

        sort(begin(temp), end(temp));

        return temp[temp.size()-1];
    }
};