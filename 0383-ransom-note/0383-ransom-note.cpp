class Solution {
public:
    bool canConstruct(string r, string m) {
        if(m.size() < r.size()) return false;

        map<char, int> r_mp;
        map<char, int> m_mp;

        for(char ch : r)
            r_mp[ch]++;
        for(char ch : m)
            m_mp[ch]++;

        auto it = r_mp.begin();
        
        for(int i = 0; i < r_mp.size(); i++){
            auto res = m_mp.find(it->first);

            if(it != m_mp.end()){
                if(res->second < it->second) return false;

                cout << res->first << res->second << endl;
            }

            it++;           
        }

        return true;
    }
};