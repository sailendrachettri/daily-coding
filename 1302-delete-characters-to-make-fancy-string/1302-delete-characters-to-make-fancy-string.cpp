class Solution {
public:
    string makeFancyString(string s) {
        string ans  = "";
        int size = s.size();

        for(int i = 0; i < size-2; i++){
            if(s[i] == s[i+1] && s[i] == s[i+2]){
               s[i] = '-';
            }            
        }

        for(int i = 0; i < size; i++){
            if(s[i] != '-')
                ans += s[i];
        }

        cout << ans;
        return ans;
    }
};