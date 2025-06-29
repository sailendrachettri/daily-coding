class Solution {
public:

    bool check(string str, int k){
        int count_0 = 0;
        int count_1 = 0;

        for(char ch : str){
            if(ch == '0')
                count_0++;
            else if(ch == '1')
                count_1++;
        }

        if(count_0 <= k || count_1 <= k)
            return true;
        
        return false;
    }
    int countKConstraintSubstrings(string s, int k) {
        int count = 0;
        string str = "";
        
        for(int start = 0; start < s.size(); start++){
            for(int end = start; end < s.size(); end++){

                for(int i = start; i <= end; i++){
                    str += s[i];
                }

                bool ans = check(str, k);
                cout << str  << " " << ans << endl;
                if(ans == true)
                    count++;

                str = "";
                
            }
        }

        return count;
    }
};