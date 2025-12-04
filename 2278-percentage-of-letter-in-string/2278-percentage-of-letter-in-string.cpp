class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;

        for(char ch : s){
            if(ch == letter) count++;
        }

        cout << count;

        return ((count*1.0/s.size()*1.0) * 100);
    }
};