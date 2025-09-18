class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int max_len = 0;
        unordered_set<char> hash;

        for(int i = 0; i < s.size(); i++){
            while(hash.find(s[i]) != hash.end()){
                hash.erase(s[left]);
                left++;
            }

            hash.insert(s[i]);
            max_len = max(max_len, i-left+1);
        }

        return max_len;
    }
};