class Solution {
private:
    bool isPrefixAndSuffix(string s1, string s2){
        return (s2.starts_with(s1) && s2.ends_with(s1));
    }
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;

        for(int i = 0; i < words.size(); i++){
            for(int j = i+1; j < words.size(); j++){
                if(words[i].size() <= words[j].size()){
                    bool res = isPrefixAndSuffix(words[i], words[j]);

                    if(res)
                        count++;
                }
            }
        }

        return count;
    }
};