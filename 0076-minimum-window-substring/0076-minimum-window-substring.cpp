class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> hash;
        for(char c : t) hash[c]++;
        int n = hash.size();
        int low = 0, hi = 0;
        int ans = INT_MAX, st = -1;
        int len = s.size();
        while(hi < len){
            hash[s[hi]]--;
            if(hash[s[hi]] == 0) n--;
            while(n == 0 && low <= hi){
                int tmp = hi-low+1;
                if(tmp < ans) ans = tmp, st = low;
                if(low < hi){
                    ++hash[s[low]];
                    if(hash[s[low]] > 0) n++;
                }
                low++;
            }
            hi++;
        }
        return ans == INT_MAX ? "" : s.substr(st, ans);
    }
};