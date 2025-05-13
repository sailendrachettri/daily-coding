class Solution {
public:
    int firstUniqChar(string s) {
        for(int i = 0; i < s.size(); i++){
            bool present = false;
            for(int j = 0; j < s.size(); j++){
                if(s[i] == s[j] && i != j){
                    present = true;
                    break;
                }
            }

            if(!present)
                return i;
        }

        return -1;
    }
};