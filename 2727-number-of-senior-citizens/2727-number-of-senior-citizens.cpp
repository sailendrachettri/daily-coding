class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;

        for(string s : details){
            string str_age = "";
            str_age.push_back(s[11]);
            str_age.push_back(s[12]);
            int age = stoi(str_age);
            
            if(age > 60) ans++;
        }

        return ans;
    }
};