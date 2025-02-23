class Solution {
public:
    bool isAnagram(string s, string t) {

        // base case
        if(s.size() != t.size()) return false;

        map<char, int> s_freq;
        map<char, int> t_freq;

        for(char ch : s)
            s_freq[ch]++;
        for(char ch : t)
            t_freq[ch]++;

        if(s_freq.size() != t_freq.size()) return false;

        auto s_it = s_freq.begin();
        auto t_it = t_freq.begin();

        for(int i = 0; i < s_freq.size(); i++){
            if(s_it->first == t_it->first && s_it->second != t_it->second) return false;
            if(s_it->first != t_it->first) return false;
            s_it++;
            t_it++;
        }

        return true;
    }
};