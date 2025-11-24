class Solution {
public:
    string maskPII(string s) {
        bool is_email = false;
        int idx = 0;

        for(char ch : s){
            if(ch == '@'){
                is_email = true;
                break;
            }
            idx++;
        }

        // email
        if(is_email){
            string masked = "";
            masked += tolower(s[0]);
            masked += "*****";
            masked += tolower(s[idx-1]);
            masked += '@';

            idx++;
            while(idx < s.size()){
                masked += tolower(s[idx++]);
            }

            return masked;  
        }

        // phone

        string ph = "";
        string masked = "";
        for(char ch : s){

            if(ch >= '0' && ch <= '9'){
                ph += ch;
            }
        }

        cout << ph << endl;

        if(ph.size() == 10){
            masked += "***-***-";
            int idx = 6;

            while(idx < ph.size()){
                masked += ph[idx++];
            }

            return masked;

        }else if(ph.size() == 11){
                masked += "+*-***-***-";
            int idx = 7;

            while(idx < ph.size()){
                masked += ph[idx++];
            }

            return masked;
        }else if(ph.size() == 12){
                masked += "+**-***-***-";
            int idx = 8;

            while(idx < ph.size()){
                masked += ph[idx++];
            }

            return masked;
        }else if(ph.size() == 13){
            masked += "+***-***-***-";
            int idx = 9;

            while(idx < ph.size()){
                masked += ph[idx++];
            }

            return masked;
        }

        return "";
    }
};