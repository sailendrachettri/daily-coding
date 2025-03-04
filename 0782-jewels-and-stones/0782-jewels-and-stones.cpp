class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> freq;
        int ans = 0;

        for(char ch : stones)
            freq[ch]++;
        
        for(int i = 0; i < jewels.size(); i++){
            auto it = freq.find(jewels[i]);
            
            if(it != freq.end()){
                ans += it->second;
            }
        }

        return ans;
    }
};