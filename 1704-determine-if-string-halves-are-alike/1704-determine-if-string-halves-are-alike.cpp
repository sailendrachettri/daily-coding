class Solution {
public:
    
    bool isVowel(char c)
    {
        if(c == 'a' or c == 'A' or c == 'e' or c == 'E' or c == 'i' or c == 'I' or c == 'o' or c == 'O' or c == 'u' or c == 'U')
            return true;
        return false;
    }
    
    bool halvesAreAlike(string s) {
        
        int l = s.length();
        int c1 = 0, c2 = 0;
        
        for(int i = 0; i < l/2; i++)
        {
            if(isVowel(s[i]) ) ++c1;
        }
        
        for(int i = l/2; i < l; ++i)
        {
            if(isVowel(s[i]) ) ++c2;
        }
        
        return c1 == c2;
    }
};