class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, int> mp;
        int count = 0;

        for(char ch : allowed)
            mp[ch]++;

        for(int i = 0; i < words.size(); i++){
            bool present = true;
            for(int j = 0; j < words[i].size(); j++){
                auto it = mp.find(words[i][j]);

                if(!(it != mp.end())){
                    present = false;
                }
            }

            if(present){
                count++;
            }
        }

        return count;
    }
};