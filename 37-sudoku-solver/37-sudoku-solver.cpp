class Solution {
    
    bool isSafe(int row, int col, vector<vector<char>>& board, char val)
    {
        int n = board.size();
        
        for(int i = 0; i < n; i++)
        {
            // row check
            if(board[row][i] == val)
                return false;
            
            // col check
            if(board[i][col] == val)
                return false;
            
            // 3x3 matrix check
            if(board[3*(row/3) + i/3][3*(col/3) + i%3] == val)
                return false;
        }
        
        return true;
    }
    
    bool solve(vector<vector<char>>& board)
    {
        int n = board.size();
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(board[i][j] == '.')
                {
                    for(char val = '1'; val <= '9'; val++)
                    {
                        if(isSafe(i, j, board, val) )
                        {
                            board[i][j] = val;
                            
                            bool nextPossibleSolution = solve(board);
                            
                            if(nextPossibleSolution)
                                return true;
                            else
                            {
                                // backtrack
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }                
            } 
        }
        
        return true;
    }
    
public:
    void solveSudoku(vector<vector<char>>& board) {
     
     solve(board);
        
    }
};