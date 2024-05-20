class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int n1 = s.size();
        int n2 = t.size();

        cout << n1 << " " << n2;

        if(n1 != n2) return false;

        for(int i = 0; i < n1; i++){
            if(s[i] != t[i]) return false;
        }

        return true;
    }
};