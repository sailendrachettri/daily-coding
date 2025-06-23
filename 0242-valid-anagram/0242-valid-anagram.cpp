class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> freq_s;
        map<char, int> freq_tt;

        for(char ch : s){
            freq_s[ch]++;
        }
        for(char ch : t){
            freq_tt[ch]++;
        }

        if(freq_s.size() != freq_tt.size())
            return false;
        
        auto it_s = freq_s.begin();
        auto it_tt = freq_tt.begin();

        for(int i = 0; i < freq_s.size(); i++){
            if(it_s->first != it_tt->first) return false;
            else if(it_s->second != it_tt->second) return false;
            it_s++; it_tt++;
        }

        return true;

    }
};