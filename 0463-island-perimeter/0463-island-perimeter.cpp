class Solution {
public:
    int row;
    int col;
    int peri;
    void dfs(vector<vector<int>>&grid,int i,int j){
        if(i<0||i>=row||j<0||j>=col||grid[i][j]==0){
            peri++;
            return;
        }
        if(grid[i][j]==-1){
            return;
        }
        grid[i][j]=-1;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        row=grid.size();
        col = grid[0].size();
        peri=0;
        for (int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j);
                    return peri;
                }
            }
        }
        return 0;
    }
};