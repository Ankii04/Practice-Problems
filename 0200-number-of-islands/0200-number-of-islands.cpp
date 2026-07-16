class Solution {
public:
    void bfs(vector<vector<char>>& grid, int row, int col, vector<vector<int>>& vis) {
        int m = grid.size();
        int n = grid[0].size();

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        queue<pair<int, int>> q;
        q.push({row, col});
        vis[row][col] = 1;

        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nr = r + delrow[i];
                int nc = c + delcol[i];

                if (nr >= 0 && nr < m && nc >= 0 && nc < n &&
                    grid[nr][nc] == '1' && !vis[nr][nc]) {
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));
        int cnt = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    cnt++;
                    bfs(grid, i, j, vis);
                }
            }
        }

        return cnt;
    }
};