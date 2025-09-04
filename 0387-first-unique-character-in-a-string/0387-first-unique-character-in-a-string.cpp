class Solution {
public:
    int firstUniqChar(string s) {

        for(int i = 0;  i < s.size(); i++){
            bool is_present = false;

            for(int j = 0; j < s.size(); j++){
                if(i != j && s[i] == s[j]){
                    is_present = true;
                    break;
                }
            }

            if(!is_present) return i;
        }

        return -1;
    }
};