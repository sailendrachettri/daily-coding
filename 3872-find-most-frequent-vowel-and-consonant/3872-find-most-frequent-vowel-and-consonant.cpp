class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vol;
        unordered_map<char, int> con;
        int vol1 = 0;
        int con1 = 0;

        for(char ch : s){
            if(ch == 'a' || ch == 'e' || ch == 'i'
                || ch == 'o' || ch == 'u'
            ){
                vol[ch]++;
            }else{
                con[ch]++;
            }
        }
        
        for(auto it : vol){
            vol1 = max(vol1, it.second);
        }

         for(auto it : con){
            con1 = max(con1, it.second);
        }

        return vol1+con1;


    }
};