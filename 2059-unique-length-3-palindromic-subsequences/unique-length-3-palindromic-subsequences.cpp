class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> minExist(26, INT_MAX);
        vector<int> maxExist(26, INT_MIN);

        for(int i = 0; i < s.size(); i++){
            int charIndex = s[i] - 'a';
            minExist[charIndex] = min(minExist[charIndex], i);
            maxExist[charIndex] = max(minExist[charIndex], i);
        }

        int uniqueCount = 0;

        for(int charIndex = 0; charIndex < 26; charIndex++){
            if(minExist[charIndex] == INT_MAX || maxExist[charIndex] == INT_MIN){
                continue;
            }

            unordered_set<char> uniqueCharBetween;

            for(int j = minExist[charIndex] + 1; j < maxExist[charIndex]; j++){
                uniqueCharBetween.insert(s[j]);
            }

            uniqueCount += uniqueCharBetween.size();
        }

        return uniqueCount;
    }
};