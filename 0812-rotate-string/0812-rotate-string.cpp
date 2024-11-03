class Solution {
public:
    bool rotateString(string s, string g) {
        int s_size = s.size();
        int g_size = g.size();

        if(s_size != g_size) return false;
        string temp = s;

        for(int i = 0; i < s_size; i++){
            temp += s[i];
            cout << "temp: " << temp << endl;
            temp.erase(temp.begin() + 0);

            cout << "temp: " << temp << endl;

            if(temp == g) return true;
        }

        return false;
    }
};