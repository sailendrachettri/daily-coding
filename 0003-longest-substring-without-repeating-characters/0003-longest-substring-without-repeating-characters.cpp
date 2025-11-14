class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == "") return 0;

        unordered_set<char> st;
        int idx = 0, left = 0;
        int ans = 0;

        while(idx < s.size()){
            while(st.find(s[idx]) != st.end()){
                st.erase(s[left++]);
            }

            int size = st.size();
            ans = max(ans, size);
            st.insert(s[idx++]);
        }

        return ans+1;
    }
};