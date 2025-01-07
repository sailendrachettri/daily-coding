class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> ans;

        for(int i = s.size()-1; i >= 0; i--)
            ans.push_back(s[i]);
        
        s.clear();

        for(const char &ch : ans)
            s.push_back(ch);
    }
};