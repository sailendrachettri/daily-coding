class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;
        int maxi = -1;

        for(int val : arr){
            freq[val]++;
        }

        for(auto it : freq){
            if(it.first == it.second) {
                maxi = max(it.first, maxi);
            }  
                
        }
        return maxi;
    }
};