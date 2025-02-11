class Solution {
public:
    string removeOccurrences(string s, string part) {
        for(int i = 0; i < s.size();){

            bool is_present = true;
            int idx = i;
            int idx2 = 0;
            int size = part.size();

            if(s[idx] == part[0]){
                while(size--){
                    if(s[idx++] != part[idx2++]){
                        is_present = false;
                        break;
                    }
                }

                idx = i;
                size = part.size();
                if(is_present){
                    while(size--){
                        s.erase(s.begin()+idx);
                    }

                i = 0;
                } else{
                    i++;
                }
            } else{
                    i++;
                }

        }

        return s;
    }
};