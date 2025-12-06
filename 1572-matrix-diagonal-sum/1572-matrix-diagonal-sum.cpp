class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        map<pair<int, int>, int> mp;
        int sum = 0;

        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(!(mp.find({i, j}) != mp.end())){
                    mp[{i, j}]++;

                    if(i == j || (i+j == mat.size()-1))
                        sum += mat[i][j];
                }
            }
        }

        for(auto it : mp){
            cout << it.first.first << " " << it.second;
        }

        return sum;
    }
};