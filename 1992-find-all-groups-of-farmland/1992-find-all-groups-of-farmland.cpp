class Solution {
public:
    vector<vector<int>> directions{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    
    pair<int, int> bfs(vector<vector<int>>& grid, int i, int j) {
        queue<pair<int, int>> q;
        q.push({i, j});
        grid[i][j] = -1;
        int a = i, b = j;
        while (!q.empty()) {
            auto r = q.front();
            q.pop();
            a = r.first;
            b = r.second;
            for (auto& dir : directions) {
                int i_ = r.first + dir[0];
                int j_ = r.second + dir[1];
                if (i_ < 0 || i_ >= grid.size() || j_ < 0 || j_ >= grid[0].size() || grid[i_][j_] != 1) {
                    continue;
                } else {
                    q.push({i_, j_});
                    grid[i_][j_] = -1;
                }
            }
        }
        return {a, b};
    }
    
    vector<vector<int>> findFarmland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> ans;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    pair<int, int> land = bfs(grid, i, j);
                    ans.push_back({i, j, land.first, land.second});
                }
            }
        }
        return ans;
    }
};
