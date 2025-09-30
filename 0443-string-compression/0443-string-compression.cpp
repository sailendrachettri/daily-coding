class Solution {
public:
    int compress(vector<char>& chars) {
        int len = 0;
        int idx = 0;

        char temp = chars[0];
        for(char ch : chars){
            if(ch == temp){
                len++;
            }else{
                chars[idx++] = temp;
                if(len != 1){
                    string str_len = to_string(len);
                    reverse(str_len.begin(), str_len.end());

                    while(!str_len.empty()){
                        chars[idx++] = str_len.back();
                        str_len.pop_back();
                    }
                }
                temp = ch;
                len = 1;
            }
        }

        chars[idx++] = temp;
        if(len != 1){
            string str_len = to_string(len);
            reverse(str_len.begin(), str_len.end());

            while(!str_len.empty()){
                chars[idx++] = str_len.back();
                str_len.pop_back();
            }
        }

        return idx;
    }
};