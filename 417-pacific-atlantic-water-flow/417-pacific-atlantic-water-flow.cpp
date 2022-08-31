class Solution {
    public:
    
    vector<vector<int> > res;
    
    void pacificRim(vector<vector<int>>& matrix, int r, int c, vector<vector<int> > &grid)
    {
        int R = matrix.size();
        int C = matrix[0].size();
        
        if(grid[r][c] == 1)
            return ;
        
        grid[r][c] = 1;
        
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        
        for(int i = 0; i < 4; i++)
        {
            int rr = r + dr[i];
            int cc = c + dc[i];
            
            if(rr >= 0 and cc >= 0 and rr < R and cc < C and matrix[rr][cc] >= matrix[r][c])
            {
                pacificRim(matrix, rr, cc, grid);
            }
        }
    }
    
    
    void atlanticRim(vector<vector<int>>& matrix, int r, int c, vector<vector<int> > &grid)
    {
        int R = matrix.size();
        int C = matrix[0].size();
        
        
        if(grid[r][c] == 1)
        {
            res.push_back({r, c});
        }
        
        if(grid[r][c] == 2)
            return ;
        
        grid[r][c] = 2;
        
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        
        for(int i = 0; i < 4; i++)
        {
            int rr = r + dr[i];
            int cc = c + dc[i];
            
            if(rr >= 0 and cc >= 0 and rr < R and cc < C and matrix[rr][cc] >= matrix[r][c])
            {
                atlanticRim(matrix, rr, cc, grid);
            }
        }
    }
    

    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        
        int R = matrix.size();
        
        if(R == 0)
            return res;
        
        int C = matrix[0].size();
        vector<vector<int> > grid(R, vector<int>(C, 0) );
        
        for(int i = 0; i < R; i++)
        {
            for(int j = 0; j < C; j++)
            {
                if(i == 0 or j == 0)
                    pacificRim(matrix, i, j, grid);
            }
        }
        
        for(int i = 0; i < R; i++)
        {
            for(int j = 0; j < C; j++)
            {
                if(i == R-1 or j == C-1)
                    atlanticRim(matrix, i, j, grid);
            }
        }
        
        return res;
    }
};