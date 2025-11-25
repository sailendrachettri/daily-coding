class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int len_a = a.length();
        int len_b = b.length();
        int n = len_b/len_a;

        int count = n;
        string na = "";

        while(count--){
            na = na + a;
        }

        if(na.find(b) != string::npos){
            return n;
        }
        na += a;

        if(na.find(b) != string::npos){
            return n+1;
        }

        na += a;

        if(na.find(b) != string::npos){
            return n+2;
        }

        return -1;


    }
};