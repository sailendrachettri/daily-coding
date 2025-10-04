class Solution {
public:
    int maxVowels(string s, int k) {
        string str = "";
        int count = 0;
        int ans;

        for(int i = 0; i < k; i++){
            s[i] = tolower(s[i]);
            str += s[i];

            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                count++;
            }
        }

        ans = count;

        for(int i = k; i < s.size(); i++){
            s[i] = tolower(s[i]);
            str += s[i];
            

            

            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                count++;

            }
             

            if(str[i-k] == 'a' || str[i-k] == 'e' || str[i-k] == 'i' || str[i-k] == 'o' || str[i-k] == 'u'){
                count--;
            }

            ans = max(ans, count);

           
        }

        return ans;
    }
};