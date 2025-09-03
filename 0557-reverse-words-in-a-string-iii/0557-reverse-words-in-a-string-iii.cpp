class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int end = 0;
        int size = s.size();

        while(size--){
            while(end < s.size() && s[end] != ' '){
                end++;
            }

            int i = start;
            int j = end-1;

            while(i < j){
                swap(s[i++], s[j--]);
            }

            start = end+1;
            end = end+1;
        }

        return s;
        
    }
};