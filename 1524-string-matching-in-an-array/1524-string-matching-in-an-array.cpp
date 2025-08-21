class Solution {
public:
    bool match(vector<string> words, int idx, string s){
        for(int i = 0; i < words.size(); i++){
            if(i != idx){
                for(int k = 0; k < words[i].size(); k++){
                    for(int len = 1; len <= words[i].size()-1; len++){
                        if(s == words[i].substr(k, len))
                            return true;
                    }
                }
            }
        }

        return false;
    }
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        int idx = 0;

        for(string st : words){
            bool is_sub = match(words, idx, st);

            if(is_sub)
                ans.push_back(st);

            idx++;
        }

        return ans;
    }
};