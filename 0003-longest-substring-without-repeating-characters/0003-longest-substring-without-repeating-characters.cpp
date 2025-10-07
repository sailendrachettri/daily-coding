class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0;
        int ans = 0;
        unordered_set<char> st;

        while(right < s.size()){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left++]);
            }

            st.insert(s[right++]);            
            int len = st.size();
            ans = max(ans, len);
        }

        
        return ans;
    }
};