class Solution {
public:
    int countSeniors(vector<string>& details) {
        int sr = 0;

        for(string s : details){
            string str = "";

            str.push_back(s[11]);
            str.push_back(s[12]);

            if(stoi(str) > 60)
                sr++;
        }

        return sr;
    }
};