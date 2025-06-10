class Solution {
public:
    int maxScore(string s) {
        int ans = 0;
        int left_sum = 0;
        int right_sum = 0;

        for(int i = 0; i < s.size()-1; i++){
            for(int j = 0; j <= i; j++){
                if(s[j] == '0')
                    left_sum++;
            }

            for(int j = i+1; j < s.size(); j++){
                if(s[j] == '1')
                    right_sum++;
            }

            ans = max(ans, (left_sum+right_sum));
            left_sum = 0;
            right_sum = 0;
        }

        return ans;
    }
};