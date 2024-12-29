class Solution {
public:
    string reverseWords(string s) {
        string pure = "";
        string temp = "";
        string ans = "";

        int start = 0;
        int end = s.size()-1;

        while(s[start] == ' ')
            start++;
        while(s[end] == ' ')
            end--;

        for(int i = start; i <= end;){
            if(s[i] != ' ')
                pure += s[i];

            else{
                pure += ' ';
                while(s[i] == ' ')
                    i++;
                continue;
            }
            i++;
        }


        reverse(pure.begin(), pure.end());
        cout <<"pure reversed: " << pure << endl;


        for(int i = 0; i <= pure.size(); i++){
            temp = "";

            while(pure[i] != ' ' && i < pure.size())
                temp += pure[i++];
            
            reverse(temp.begin(), temp.end());

            cout << "temp: " << temp << endl;

            ans += temp;

            if(i < pure.size())
                ans += ' ';
        }

        return ans;
    }
};