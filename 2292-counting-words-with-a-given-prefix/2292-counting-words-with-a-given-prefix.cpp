class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int start = 0;
        int end = words.size()-1;
        int count = 0;

        while(start <= end){
            if(words[start].starts_with(pref))
                count++;
            if(words[end].starts_with(pref))
                count++;
            
            start++; end--;
        }

        if(words[words.size()/2].starts_with(pref) && words.size()%2 != 0)
            count--;

        return count;
    }
};