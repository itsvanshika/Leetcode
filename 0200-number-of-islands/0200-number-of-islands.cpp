class Solution {
public:
    vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};
    void bfs(vector<vector<char>>&grid,int i, int j){
        queue<pair<int,int>> q;
        q.push({i,j});
        grid[i][j]='$';
        while(!q.empty()){
            auto r = q.front();
            q.pop();
        for(auto &dir:directions){
            int i_=r.first+dir[0];
            int j_=r.second+dir[1];
            if(i_<0 || i_>=grid.size()||j_<0||j_>=grid[0].size()||grid[i_][j_]!='1'){
                continue;
            }
            else{
                q.push({i_,j_});
                grid[i_][j_]='$';
            }
        }
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int island=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    bfs(grid,i,j);
                    island+=1;
                }
            }
        }
        return island;
    }
};