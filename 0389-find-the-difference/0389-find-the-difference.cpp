class Solution {
public:
    char findTheDifference(string s, string t) {
        for(char ch : s){
            for(int i = 0; i < t.size();){
                if(ch == t[i]){
                    t.erase(t.begin()+i);
                    break;
                }else{
                    i++;
                }
            }
        }
        
        
        return t[0];
    }
};