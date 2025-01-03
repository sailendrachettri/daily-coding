class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> s_freq;
        map<char, int> t_freq;

        if(s.size() != t.size()) return false;

        for(int i = 0; i < s.size(); i++){
            s_freq[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++){
            t_freq[t[i]]++;
        }

        for(int i = 0; i < s_freq.size(); i++){
            if(s_freq[i] != t_freq[i]) return false;
        }

        return true;
    }
};