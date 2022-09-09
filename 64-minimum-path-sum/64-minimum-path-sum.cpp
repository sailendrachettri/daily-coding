class Solution {
    
//     int f(int i, int j, vector<vector<int>>& grid, vector<vector<int> > &dp)
//     {
//         if(i == 0 and j == 0)
//             return grid[i][j];
        
//         if(i < 0 or j < 0)
//             return 1e9;
        
//         if(dp[i][j] != -1)
//             return dp[i][j];
        
//         int up = grid[i][j] + f(i-1, j, grid, dp);
//         int left = grid[i][j] + f(i, j-1, grid, dp);
        
//         return dp[i][j] = min(up, left);
//     }
    
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int> > dp(n, vector<int>(m, 0) );
        
        vector<int> prev(m, 0);
        
        for(int i = 0; i < n; i++)
        {
            vector<int> curr(m, 0);
            
            for(int j = 0; j < m; j++)
            {
                if(i == 0 and j == 0)
                    curr[j] = grid[i][j];
                
                else
                {
                    int up = grid[i][j];
                    if(i > 0)
                        up += prev[j];
                    else
                        up += 1e9;
                    
                    int left = grid[i][j];
                    if(j > 0)
                        left += curr[j-1];
                    else
                        left += 1e9;
                    
                    curr[j] = min(left, up);
                }
            }
            
            prev = curr;
        }
        
        return prev[m-1];
    }
};