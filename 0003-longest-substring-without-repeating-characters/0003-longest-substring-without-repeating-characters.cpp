class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        unordered_set<char> st;

        int right = 0, left = 0;

        while(right < s.size()){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left++]);
            }

            st.insert(s[right++]);  

            int size = st.size();
            max_len = max(max_len, size);
        }

        return st.size() > max_len ? st.size() : max_len;
    }
};