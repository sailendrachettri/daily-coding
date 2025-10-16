class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        map<char, int> mp1, mp2;
        vector<int> arr1, arr2;

        for(char ch : word1)
            mp1[ch]++;
        for(char ch : word2)
            mp2[ch]++;

        for(auto it : mp1)
            arr1.push_back(it.second);
        for(auto it : mp2)
            arr2.push_back(it.second);

        for(char ch : word1){
            auto it = mp2.find(ch);

            if(!(it != mp2.end()))
                return false;
        }

        for(char ch : word2){
            auto it = mp1.find(ch);

            if(!(it != mp1.end()))
                return false;
        }

        if(arr1.size() != arr2.size()) return false;

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        for(int i = 0; i < arr1.size(); i++){
            if(arr1[i] != arr2[i]) return false;
        }

        return true;

       
    }
};