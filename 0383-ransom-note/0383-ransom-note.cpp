class Solution {
public:
    bool canConstruct(string r, string m) {
        map<char, int> r_mp;
        map<char, int> m_mp;

        for(char ch : r)
            r_mp[ch]++;
        for(char ch : m)
            m_mp[ch]++;
        
        if(r_mp.size() > m_mp.size())
            return false;
        
        for(auto r_it : r_mp){
            auto m_it = m_mp.find(r_it.first);

            if(!(m_it != m_mp.end())){
                return false;
            }else{
                if(r_it.second > m_it->second)
                    return false;
            }
        }

        return true;
    }
};