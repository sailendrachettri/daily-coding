class Solution {
public:
    bool canConstruct(string r, string m) {
        if(m.size() < r.size())
            return false;
        
        map<char, int> freq_r;
        map<char, int> freq_m;

        for(char ch : r)
            freq_r[ch]++;
        
        for(char ch : m)
            freq_m[ch]++;
        
        auto it_r = freq_r.begin();

        for(int i = 0; i < freq_r.size(); i++){
           auto res = freq_m.find(it_r->first);

           if(it_r != freq_m.end()){
                if(res->second < it_r->second)
                    return false;
           }
           it_r++;
        }

        return true;
    }
};