class Solution {
    
    bool isVowel(char &ch)
    {
        return (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U');
    }
    
public:
    string reverseVowels(string s) {
        
        vector<char> vow;
        for(auto i : s)
        {
            if(isVowel(i) )
                vow.push_back(i);
        }
        
        reverse(vow.begin(), vow.end() );
        
        int k = 0;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(isVowel(s[i]) )
                s[i] = vow[k++];
        }
        
        return s;
    }
};