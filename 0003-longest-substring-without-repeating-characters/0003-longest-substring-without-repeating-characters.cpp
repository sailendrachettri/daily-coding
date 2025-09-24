class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;
        int left = 0;
        int max_len = 0;

        for(int i = 0; i < s.size(); i++){
            while(mp.find(s[i]) != mp.end()){
                mp.erase(s[left]);
                left++;
            }

            mp.insert(s[i]);
            int size =  mp.size();
            max_len = max(max_len, size);
        }

        return max_len;
    }
};