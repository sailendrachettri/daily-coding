class Solution {
public:
    bool hasSameDigits(string s) {
        string temp = s;
        int idx = 0;

        while(temp.size() > 2){
            string st = "";

            for(int i = 0; i < temp.size()-1; i++){
                int val1 = temp[i] - '0';
                int val2 = temp[i+1] - '0';
                int sum = (val1 + val2) %10;
                st += sum;
            }

            temp = st;

            if(idx == s.size()-1){
                idx = 0;
            }

            if(temp.size() == 2){
                if(temp[0] != temp[1]) return false;
                else if(temp[0] == temp[1]) return true;
            }
        }  

        return false;
    }
};