class Solution {
public:
    int strStr(string haystack, string needle) {
        int start = 0;

        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i] == needle[0]){
                string st = "";
                int idx = i;
                int size = needle.size();
                while(size-- && idx < haystack.size()){
                    st += haystack[idx++];
                }

                if(st == needle) return i;
            }
        }

        return -1;
    }
};