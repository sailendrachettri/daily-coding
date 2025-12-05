class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string st = to_string(num);
        int ans = 0;

        for(int start = 0; start < st.size(); start++){
            for(int end = start; end < st.size(); end++){
                int val = 0;
                int len = 0;
                for(int i = start; i <= end; i++){
                    val = val * 10 + (st[i]-'0');
                    len++;
                }

                
                if(val != 0 && len == k && num%val == 0){
                    ans++;
                }
            }
        }

        return ans;
    }
};