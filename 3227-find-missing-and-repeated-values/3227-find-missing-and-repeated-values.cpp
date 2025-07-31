class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int rep = INT_MAX, mis = INT_MAX;
        map<int, int> freq;

        for(int i  = 1; i <= grid.size()*grid[0].size(); i++){
            freq[i] = 0;
        }

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                freq[grid[i][j]]++;
            }
        }

        for(auto it : freq){
            if(it.second == 0)
                mis = it.first;
            if(it.second > 1)
                rep = it.first;
            
            if(mis != INT_MAX && rep != INT_MAX)
                return {rep, mis};
        }

        return {-1, -1};
    }
};