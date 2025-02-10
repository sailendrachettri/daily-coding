class Solution {
public:
    string clearDigits(string s) {
        if(s == "") return "";

        for(int i = 0; i < s.size()*100; i++){
            for(int j = 0; j < s.size(); j++){
                if(s[j] >= '0' && s[j] <= '9'){
                    s.erase(s.begin()+j);
                    s.erase(s.begin()+j-1);
                    break;
                }
            }
            cout << s << endl;
        }

        return s;
    }
};