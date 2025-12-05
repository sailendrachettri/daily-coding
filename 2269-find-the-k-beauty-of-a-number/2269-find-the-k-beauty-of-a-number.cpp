class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string st = to_string(num);
        int size = st.size();
        int ans = 0;

        for(int i = 0; i < st.size(); i++){
            int val = 0;
            int t = k;
            int idx = i;
            int len = 0;

            while(idx < size && t--){
                len++;
                val = val * 10 + (st[idx]-'0');
                idx++;
            }

            if(len == k && val != 0 && num%val == 0){
                ans++;
            }
        }

        return ans;
    }
};