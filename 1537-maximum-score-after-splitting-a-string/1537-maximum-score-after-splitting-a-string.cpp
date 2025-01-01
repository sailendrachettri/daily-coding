class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int ans = INT_MIN;
        int ct0 = 0, ct1 = 0;

        for(int i = 0; i < n-1; i++){
            ct0 = 0;
            ct1 = 0;
            for(int j = 0; j <= i; j++){
                if(s[j] == '0')
                    ct0++;
            }

            for(int j = i+1; j < n; j++){
                if(s[j] == '1')
                    ct1++;
            }

            cout << ct0 << " " << ct1 << endl;

            ans = max(ans, (ct0+ct1));
        }

        return ans;
    }
};