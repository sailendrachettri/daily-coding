class Solution {
public:
    int strStr(string haystack, string needle) {
        int idx = 0;

        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i] == needle[0]){
                idx = i;
                string st = "";

                int n = needle.size();
                while(n--  && idx < haystack.size()){
                    st += haystack[idx++];
                }

                if(st == needle) return i;
            }
        }

        return -1;
    }
};