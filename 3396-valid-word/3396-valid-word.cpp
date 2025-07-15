class Solution {
public:

    bool is_vowel(char ch){
        ch = tolower(ch);

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        
        return false;
    }

    bool is_con(char ch){
        ch = tolower(ch);

        if(ch >= 'a' && ch <= 'z' && !(is_vowel(ch)))
            return true;
        
        return false;
    }
    bool isValid(string word) {
        int count_vowel = 0;
        int count_con = 0;

        if(word.size() < 3)
            return false;
        
        for(char ch : word){
            if(!(isalnum(ch)))
                return false;
            
            if(is_vowel(ch))
                count_vowel++;
            else if(is_con(ch))
                count_con++;
        }

        if(count_vowel < 1 || count_con < 1)
            return false;
        
        return true;
    }
};