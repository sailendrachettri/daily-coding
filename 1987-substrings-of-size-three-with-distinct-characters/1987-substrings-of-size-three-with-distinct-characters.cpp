class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans = 0;

        for(int start = 0; start < s.size(); start++){
            for(int end = start; end < s.size(); end++){
                string str = "";

                for(int i = start; i <= end; i++){
                    str += s[i];
                }

                if(str.size() == 3){
                    set<char> st;

                    for(int val : str)
                        st.insert(val);
                    
                    if(st.size() == 3)
                        ans++;
                    
                    st.clear();
                }
            }
        }

        return ans;
    }
};