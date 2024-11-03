class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_map<int, int> mp;
        int hash = 0;
        
        if(k > s.size())
            return false;
        
        int sz = pow(2, k);

        for(int i = 0; i < k; i++){
            hash = hash * 2 + s[i] - '0';
        }

        int val = pow(2, k-1);

        for(int i = k; i < s.size(); i++){
            mp[hash]++;
            hash = (hash - (s[i-k] - '0') * (val)) * 2 + s[i] - '0';
        }

        mp[hash]++;

        if(mp.size() == sz)
            return true;
        return false;
    }
};