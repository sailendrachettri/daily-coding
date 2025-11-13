class Solution {
public:
    int maxOperations(string s) {
        int op = 0, count = 0;
        int idx = 0;

        while(idx < s.size()){
            if(s[idx] == '0'){
                op += count;
                while(idx < s.size() && s[idx] == '0')
                    idx++;
            }else{
                count++;
                idx++;
            }
        }

        return op;
    }
};