class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int dub = NULL;
        int mis = NULL;

        map<int, int> freq;

        for(int i = 0; i <= grid.size()*grid.size(); i++){
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
                dub = it.first;

            if(mis != NULL && dub != NULL)
                return {dub, mis};
        }

        return {dub, mis};
    }
};