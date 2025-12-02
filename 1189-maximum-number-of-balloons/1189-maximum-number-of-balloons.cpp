class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans = INT_MAX;

        string st = "balon";
        unordered_map<char, int> mp;

        for(char ch : text) mp[ch]++;

        for(char ch : st){
            auto it = mp.find(ch);

            if(it != mp.end()){
                if(ch == 'l' || ch == 'o')
                    ans = min(ans, it->second/2);
                else ans = min(ans, it->second);

            }else return 0;
        }

        return ans;

    }
};