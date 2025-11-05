class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;

        string st = "";
        int idx = 0;
        for(int i = 0; i < s.size(); i++){

            if(s[i] != ' '){
                st += s[i];
            }else{
                cout << st << " " << pattern[idx] << endl;
                auto it1 = mp1.find(pattern[idx]);
                auto it2 = mp2.find(st);

                if(it1 != mp1.end()){
                    if(it1->second != st) return false;
                }
                if(it2 != mp2.end()){
                    if(it2->second != pattern[idx]) return false;
                }

                if(idx >= pattern.size()-1) return false;

                mp1[pattern[idx]] = st;
                mp2[st] = pattern[idx++];
                st = "";
            }
        }

        cout << st << " " << pattern[idx] << endl;
        auto it1 = mp1.find(pattern[idx]);
        auto it2 = mp2.find(st);

        if(it1 != mp1.end()){
            if(it1->second != st) return false;
        }
        if(it2 != mp2.end()){
            if(it2->second != pattern[idx]) return false;
        }
        mp1[pattern[idx]] = st;
        mp2[st] = pattern[idx++];
        st = "";

        return idx >= pattern.size();
    }
};