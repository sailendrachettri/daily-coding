class Solution {
public:
    int maxScore(string s) {
        int score = 0;
        for(int i = 0; i < s.size()-1; i++){
            int left = 0, right = 0;

            for(int j = 0; j <= i; j++){
                if(s[j] == '0')
                    left++;
            }

            for(int j = i+1; j < s.size(); j++){
                if(s[j] == '1')
                    right++;
            }

            score = max(score, (left + right));

            left = 0, right = 0;
        }

        return score;
    }
};