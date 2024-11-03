class Solution {
public:
    bool rotateString(string s, string g) {
        int s_size = s.size();
        int g_size = g.size();

        if(s_size != g_size) return false;

        for(int i = 0; i < s_size; i++){
            s += s[0];
            cout << "1. s " << s << endl;
            s.erase(s.begin() + 0);
            cout << "2. s " << s << endl;

            if(s == g) return true;
        }

        return false;
    }
};