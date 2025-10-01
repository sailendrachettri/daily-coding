class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> freq, freq2;

        for(int val:arr)
            freq[val]++;
        
        for(auto it : freq)
            freq2[it.second]++;
        
        for(auto it : freq2){
            if(it.second > 1)
                return false;
        }

        return true;
    }
};