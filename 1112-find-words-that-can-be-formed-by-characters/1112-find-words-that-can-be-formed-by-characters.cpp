class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int n = chars.size();
        unordered_map<char, int> mp;
        int ans = 0;

        for(auto &it : chars){
            mp[it]++;
        }

        for(auto &it : words){
            unordered_map<char, int> temp;
            temp = mp;
            string w = it;
            bool isok = true;

            for(auto i : w){
                if(temp[i] > 0) temp[i]--;
                else if(temp[i] == 0) isok = false;
            }
            if(isok) ans += w.size();
        }

        return ans;
    }
};