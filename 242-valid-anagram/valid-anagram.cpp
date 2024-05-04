class Solution {
public:
    bool isAnagram(string s, string t) {
        int start = 0, end = s.size();

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        cout << s[s.size()-1] << " " << t[t.size()-1] << endl;
        cout << s.size()-1 << " " << t.size()-1 << endl;

        if(s.size() != t.size())
            return false;

        while(start != s.size()){
            if(s[start] != t[start]){
                return false;
            }
            end--; start++;
        }

        return true;
    }
};