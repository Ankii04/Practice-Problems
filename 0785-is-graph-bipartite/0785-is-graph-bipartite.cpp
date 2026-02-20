class Solution {
public:
        bool dfs(int node, int col, vector<vector<int>>& edges,
                 vector<int>& color) {
            color[node] = col;
            for (auto it : edges[node]) {
                if (color[it] == -1) {
                    if (!dfs(it, !col, edges, color))
                        return false;
                } else if (color[it] == col) {
                    return false;
                }
            }
            return true;
        }

        bool isBipartite(vector<vector<int>>& edges) {
            // Code here
            int V = edges.size();
            vector<int> color(V, -1);
            for (int i = 0; i < V; i++) {
                if (color[i] == -1) {
                    if (!dfs(i, 0, edges, color))
                        return false;
                }
            }
            return true;
        }
    
};