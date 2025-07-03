class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        string ans = word;

        while(ans.size() <= k){
            for(char ch : word){
                if(ch == 'z')
                    ans += 'a';
                else
                    ans += (ch+1);
            }

            cout << ans << " " << word << endl;

            word = ans;
            ans = word;

            
        }

        return ans[k-1];
    }
};