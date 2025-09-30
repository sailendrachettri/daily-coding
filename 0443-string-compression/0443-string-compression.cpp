class Solution {
public:
    int compress(vector<char>& chars) {
        vector<pair<char, int>> freq;
        int len = 0;

        char temp = chars[0];
        for(char ch : chars){
            if(ch == temp){
                len++;
            }else{
                freq.push_back({temp, len});
                temp = ch;
                len = 1;
            }
        }

        freq.push_back({temp, len});

        for(auto it : freq){
            cout << it.first << " " << it.second << endl;
        }
        
        chars.clear();
        for(auto it : freq){
            chars.push_back(it.first);
            if(it.second != 1){
                string len = to_string(it.second);
                reverse(len.begin(), len.end());

                while(!len.empty()){
                    chars.push_back(len.back());
                    len.pop_back();
                }
            }
        }

        return chars.size();
    }
};