class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sizeOfS = s.size();
        int sizeOfT = t.size();

        if(sizeOfS > sizeOfT) return false;

        int ch = s[0];
        int ch_i = 0;

        int i = 0;

        while(i < sizeOfT){
            if(ch == t[i]){
                ch_i += 1;
                ch = s[ch_i];
            }
            i++;
        }

        cout << ch_i << " " << sizeOfS;

        return ch_i == sizeOfS;
    }
};