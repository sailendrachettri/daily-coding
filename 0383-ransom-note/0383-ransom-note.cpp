class Solution {
public:
    bool canConstruct(string r, string m) {
         if(m.size() < r.size())
            return false;

        map<char, int> r_freq;
        map<char, int> m_freq;

        for(char ch : r){
            r_freq[ch]++;
        }
        for(char ch : m){
            m_freq[ch]++;
        }
        
        auto r_it = r_freq.begin();
        for(int i = 0; i< r_freq.size(); i++){
            auto res = m_freq.find(r_it->first);

            if(r_it != m_freq.end()){
                if(res->second < r_it->second) return false;
            }
            r_it++;
        }

        return true;
    }
};