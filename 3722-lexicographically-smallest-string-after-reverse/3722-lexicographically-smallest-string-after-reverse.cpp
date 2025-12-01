class Solution {
public:
    string lexSmallest(string s) {
        string ans = s;

        for(int i = 1; i < s.size(); i++){
            string temp = s;

            reverse(temp.begin(), temp.begin()+i);

            ans = min(ans, temp);
        }
        cout << endl;
        for(int i = s.size()-2; i >= 0; i--){
            string temp = s;

            reverse(temp.begin()+i, temp.end());

            ans = min(ans, temp);
        }

        return ans;
    }
};