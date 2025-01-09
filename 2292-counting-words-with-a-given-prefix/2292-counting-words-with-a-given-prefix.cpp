class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(const string &st : words){
            if(st.starts_with(pref))
                count++;
        }

        return count;
    }
};