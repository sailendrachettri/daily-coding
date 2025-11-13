class Solution {
public:
    int maxOperations(string s) {
        int op = 0, count1 = 0;

        for(int i = 0; i < s.size();){
            if(s[i] == '1'){
                count1++;
                i++;
            }else{
                op += count1;

                while(i < s.size() && s[i] == '0')
                    i++;
            }
        }

        return op;
    }
};