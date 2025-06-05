class Solution {
public:
    string largestGoodInteger(string num) {
        string final = "";

        for(int i = 2; i < num.size(); i++){
            if(num[i] == num[i-1] && num[i-1] == num[i-2]){
                string ans = "";
                ans += num[i];
                ans += num[i];
                ans += num[i];

                final = max(ans, final);
            }
        }

        return final;
    }
};