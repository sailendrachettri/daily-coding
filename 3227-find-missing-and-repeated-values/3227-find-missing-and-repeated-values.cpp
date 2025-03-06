class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int, int> mp;
        int rep, mis = INT_MIN;

        for(int i = 1; i <= grid.size()*grid[0].size(); i++){
            mp[i] = 0;
        }

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                mp[grid[i][j]]++;
            }
        }

        for(auto it : mp){
            cout << it.first << " " << it.second << endl;
            if(it.second >= 2)
                rep = it.first;
            if(it.second == 0)
                mis = it.first;
        }

        // if(mis == INT_MIN) 
        //     mis = grid.size()*grid[0].size();

        return {rep, mis};


    }
};