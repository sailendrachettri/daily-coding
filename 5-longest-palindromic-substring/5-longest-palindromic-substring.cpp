class Solution {
public:
    string longestPalindrome(string s) {
        
        if(s.size() <= 1)
            return s;
        
        int max_len = 1;
        int n = s.size();
        int st = 0, ed = 0;
        
        // ODD LENGTH
        for(int i = 0; i < n-1; i++)
        {
            int l = i, r = i;
            while(l >= 0 and r < n)
            {
                if(s[l] == s[r])
                {
                    l--; r++;
                }
                
                else
                    break;
            }
            
            int len = r - l - 1;
            if(len > max_len)
            {
                max_len = len;
                st = l + 1;
                ed = r - 1;
            }
        }
        
        // EVEN LENGTH
        for(int i = 0; i < n-1; i++)
        {
            int l = i, r = i+1;
            while(l >= 0 and r < n)
            {
                if(s[l] == s[r])
                {
                    l--; r++;
                }
                
                else
                    break;
            }
            
            int len = r - l - 1;
            if(len > max_len)
            {
                max_len = len;
                st = l + 1;
                ed = r - 1;
            }
        }
        
        return s.substr(st, max_len);
        
    }
};