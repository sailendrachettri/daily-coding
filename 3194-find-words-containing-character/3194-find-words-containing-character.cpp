class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int idx = 0;
        

        for(string word : words){
            
            for(char ch : word){
                if(ch ==  x){
                    ans.push_back(idx);
                    break;
                }
            }
            idx++;
        }

        return ans;
    }
};