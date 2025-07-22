class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> freq;
        int max_vowel = 0;
        int max_cons = 0;

        for(char ch : s){
            freq[ch]++;
        }

        for(auto it : freq){
            if(it.first == 'a' || it.first == 'e' || it.first == 'i'
                || it.first == 'o' || it.first == 'u'
            ){
                max_vowel = max(max_vowel, it.second);
            }else{
                max_cons = max(max_cons, it.second);
            }
        }

        return (max_cons + max_vowel);


    }
};