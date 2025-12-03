class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int count = 1;

        for(int i = 0; i < sentence.size(); i++){
            string temp = "";

            if(sentence[i] == ' ') count++;
            
            if(sentence[i] == searchWord[0] && (i-1 == -1 || sentence[i-1] == ' ')){
                int idx = i;
                int n = searchWord.size();

                while(n--)
                    temp += sentence[idx++];
                
                cout << temp << endl;
            }

            if(temp == searchWord) return count;
        }

        return -1;
    }
};