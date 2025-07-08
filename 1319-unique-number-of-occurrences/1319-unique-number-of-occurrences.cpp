class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_map<int, int> occr;

        for(int val : arr)
            freq[val]++;
        
        for(auto it : freq)
            occr[it.second]++;
        
        for(auto it : occr)
            if(it.second > 1)
                return false;
        
        return true;
    }
};