class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) return 0;

        // BFS
        // vector<pair<int, int>> visited;
        // queue<pair<int, int>> q;
        // vector<pair<int, int>> directions = {{1,0}, {-1, 0}, {0, -1}, {0, 1}};

        // int m = grid.size();
        // int n = grid[0].size();
        // int numIslands = 0;        

        // for (int i = 0; i < m; ++i) {
        //     for (int j = 0; j < n; ++j) {
        //         if (grid[i][j] == '1') {
        //             ++numIslands;
        //             q.push({i, j});

        //             while (!q.empty()) {
        //                 auto [x, y] = q.front();
        //                 q.pop();

        //                 if (x < 0 || x >= m || y < 0 || y >= n || grid[x][y] != '1') { 
        //                     continue;
        //                 }

        //                 grid[x][y] = '0';

        //                 for (auto& d : directions) {
        //                     int x2 = x + d.first;
        //                     int y2 = y + d.second;
        //                     if (x2 >= 0 && x2 < m && y2 >= 0 && y2 < n && grid[x2][y2] == '1') {
        //                         q.push({x2, y2});
        //                     }
        //                 }
        //             }
        //         }
        //     }
        // }
        
        // DFS
        int numIslands = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == '1') { 
                    ++numIslands;
                    dfs(grid, i, j);
                }
            }
        }

        return numIslands;
    }

private:
    void dfs(vector<vector<char>>& grid, int i, int j) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != '1') {
            return;
        }

        grid[i][j] = '0';
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }
};