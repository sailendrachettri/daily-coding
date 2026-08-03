class Solution {
public:
    int characterReplacement(string s, int k) {
       vector<int> freq(26, 0);
       int left = 0;
       int maxFreq = 0;
       int maxWindow = 0;

       for(int right = 0; right < s.size(); right++){
            freq[s.at(right)-'A']++;

            maxFreq = max(maxFreq, freq[s.at(right)-'A']);

            int windowLen = right - left + 1;

            if(windowLen - maxFreq > k){
                freq[s.at(left)-'A']--;
                left++;
            }

            windowLen = right - left + 1;
            maxWindow = max(maxWindow, windowLen);
       }

       return maxWindow;
    }
};