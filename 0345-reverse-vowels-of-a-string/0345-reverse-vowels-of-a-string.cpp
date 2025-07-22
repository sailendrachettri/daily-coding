class Solution {
public:

    bool is_vowel(char ch){
        ch = tolower(ch);

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        
        return false;
    }

    string reverseVowels(string s) {
        int start = 0;
        int end = s.size()-1;

        while(start < end){
            while( start < end && !(is_vowel(s[start])))
                start++;
            while(start < end && !(is_vowel(s[end])))
                end--;

            if(start >= end)
                return s;

            cout << s[start] << " " << s[end] << endl;

            swap(s[start++], s[end--]);
        }

        return s;
    }
};