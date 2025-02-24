int delRow[4] = {-1, 0, 1, 0};
int delCol[4] = {0, 1, 0, -1};

class Solution {
private:
    void dfs(int row, int col, int newColor, vector<vector<int>> &image, vector<vector<int>> &ans){
        int initColor = image[row][col];
        ans[row][col] = newColor;

        int n = image.size();
        int m = image[0].size();

        for(int i = 0; i < 4; i++){
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == initColor && ans[nrow][ncol] != newColor){
                dfs(nrow, ncol, newColor, image, ans);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans = image;
        dfs(sr, sc, color, image, ans);

        return ans;
    }
};