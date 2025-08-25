class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> mp;
        int rep = INT_MIN, mis = INT_MIN;

        for(int i = 1; i <= grid.size()*grid.size(); i++){
            mp[i]= 0;
        }

        for(vector<int> &arr : grid){
            for(int val : arr){
                mp[val]++;
            }
        }

        for(auto it : mp){
            cout << it.first <<  " " << it.second << endl;
            if(it.second == 0)
                mis = it.first;
            else if(it.second > 1)
                rep = it.first;
            
            if(rep != INT_MIN && mis != INT_MIN)
                return {rep, mis};
        }

        return {rep, mis};

    }
};