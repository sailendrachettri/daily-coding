class Solution {
public:
    bool areNumbersAscending(string S) {
        
        stringstream s(S);
        string word;
        
        int first = -1;
        int second = -1;
        
        while(s >> word)
        {
            int a = word[0] - '0';
            
            if(a >= 0 and a <= 9)
            {
                int num = stoi(word);
                
                first = num;
                
                if(second == -1)
                    second = first;
                
                else if(second >= first)
                    return false;
                
                second = first;
            }
        }
        
        return true;
    }
};