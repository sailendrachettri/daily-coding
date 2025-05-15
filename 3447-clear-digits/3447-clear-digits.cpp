class Solution {
public:
    string clearDigits(string s) {
        string ans = "";

        for(char ch : s){
            if(ch >= '0' && ch <= '9')
                ans.pop_back();
            else
                ans.push_back(ch);
        }

        return ans;
    }
};