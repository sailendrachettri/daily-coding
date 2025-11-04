class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp, mp2;

        for(int i = 0; i < s.size(); i++){
            auto it = mp.find(s[i]);
            auto it2 = mp2.find(t[i]);

            if(it != mp.end()){
                if(it->second != t[i]) return false;
            }

             if(it2 != mp2.end()){
                if(it2->second != s[i]) return false;
            }
            
            mp[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }

        return true;
    }
};